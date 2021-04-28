import React, { Component} from 'react';
import {Text, View, StyleSheet,  TouchableOpacity,Button,Alert} from 'react-native';
import Icon from 'react-native-vector-icons/Entypo';
import Icon2 from 'react-native-vector-icons/Fontisto';
import Slider from 'react-native-smooth-slider';
import Icon3 from 'react-native-vector-icons/Feather'




const data=require('./data2.json')
export default class ReadData extends Component{
  constructor(props){
     super(props);
      this.state={ //Definerer states(interne variabler)
        dataSource:[], 
        dataAks:[],
        dataHastighet:[],
        dataSpinn:[],
        Hastighet:0,
        Akselerasjon:3,
        Spinn:0,
        value: 1,
        maxValue:800,
        minValue:1,
        pos:0,
        Start:0,
        timer:30,
        response:[]

    };
  }

 
  //Forå starte nedtelling
   componentWillUnmount() {
    clearInterval(this.clockCall);
   }
   
   decrementClock = () => {      
    this.setState((prevstate) => ({ timer: prevstate.timer-1 }));
   };
     
   
   //Funksjon som kjører før siden lastets inn, setter ulike variabler med initialverdi
  componentDidMount(){
    this.clockCall = setInterval(() => {
      this.decrementClock();
    }, 1000);

      this.setState({
        dataSource: data.x //overfører data fra data.json til dataSource
        });

      this.setState({
      dataAks: data.akselerasjon //overfører data fra data.json til dataSource
       });
     this.setState({
       dataHastighet: data.hastighet //overfører data fra data.json til dataSource
       });
      this.setState({
       dataSpinn: data.spinn //overfører data fra data.json til dataSource
        });
        this.setState({
          Start: 0//overfører data fra data.json til dataSource
           });

  }

  //Kommunikasjon mellom MCU og app for å få tilgang til data
  getDataUsingGet=()=>{
    //GET request
    fetch('http://192.168.43.8:5000/data.json', {
      method: 'GET',
      //Request Type
    })
    .then((response) => response.json())
    //If response is in json then in success
    .then((response) => {
     this.setState({
      dataSource: response.x

  })
  
    })
  }

  

//Vise hastighet, akselerasjon og Spinn

  DisplayData(){
  
      return( 
        <>
        <ShowData tittel='Hastighet [m/s]'data={this.state.dataHastighet[this.state.value]} />
        <ShowData tittel='Akselerasjon [m/s/s]' data={this.state.dataAks[this.state.value]} />
        <ShowData tittel='Spinn [..]' data={this.state.dataSpinn[this.state.value]} />
        </>
      )
  }

  //Vise skalre ikoner av 
  
  //Spinn
  DisplaySpinn(){
    let spinn=this.state.dataSpinn[this.state.value]
    if (spinn>=0){
      return(
        <Icon2 name="spinner-rotate-forward" size={spinn*4} color='green'/>
      )
      }else{
        return(
          <Icon2 name="spinner-rotate-forward" size={spinn*4} color='red'/>
        )
      }
  }

  //Hastighet
  DisplayHastighet(){
    let hastighet=this.state.dataHastighet[this.state.value]
      return(
        <Icon name="arrow-long-up" size={hastighet*2} color='green' />      
        )
  }

  //Aks
  DisplayAks(){
     let aks=this.state.dataAks[this.state.value]
    return(
      <Icon  name="dot-single" size={aks*2} color='black' />
    )
  
  }

//Plassere prikkene
placeDots(){ //funksjon som plasserer prikker avhengig av dataene
    //map er innebgyd funksjon som leser hver rad
    //bottom setter avstanden fra bunnen
    //left setter avstanden fra horisontal linje
    //hele bredden er 50%
   let board = Array(800).fill(0).map(row => new Array(2).fill(1))
    const bredde=80
   for(let row=0; row<700; row++){
        board[row][0]=row
        board[row][1]=this.state.dataSource[row]/(2*bredde)
  }


   return board.map((data) => {
        if(data[0]==this.state.value){
          return( 
            <View flex={1} right={(data[1]*100).toString()+'%'}>
            <Icon  name="dot-single" size={25}  color="black"/>
            </View>   
        )} else {
          return(
            <View flex={1} right={(data[1].toString()*100)+'%'} >
            <Icon  name="dot-single" size={10}  color="black"/>
            </View>   
          )
          }
    })
  }

  //Endre side fra nedtelling til fremstilling av data
  changeScreen=()=>{
    this.setState({
      Start: 1
  })
  }

  //Sjekke om MCU klarte å lagre data
  CheckData=()=>{
      //GET request
      if(this.state.timer==20){
        fetch('http://192.168.43.8:5000/state', {
          method: 'GET',
          //Request Type
        })
        .then((response) => response.json())
        //If response is in json then in success
        .then((response) => {
         this.setState({
             response: response.Response
    
         })
        })
      }
      if(this.state.response[0]==0){
        Alert.alert("Error")
        this.props.navigation.navigate("Home")
      }
      if(this.state.response[0]==1){
        this.setState({
          Start: 1
      })
      {this.getDataUsingGet()}

      }
    }

   //Ta deg til hovedsiden
   ToHome=()=>{
    this.props.navigation.navigate("Home")
     }

     //Feilmelding om den ikke fikk lastet inn data
   CantConnect=()=>{
    if(this.state.timer==0){
     Alert.alert("Took too long to load data.")
     this.props.navigation.navigate("Home")
    }
  }
  
      

//<SLider ....  /> definerer den nedre slideren med
//Minimumvardi, maximumverdi og step(hvor langt den hopper)
//{this.DisplayData()} Sette inn denne


/*Sette det inn
<View style={styles.Info}>

                  
<View style={styles.Icons}>
  <Text style={styles.text2}>Hastighet</Text>
 {this.DisplayHastighet()}
</View>

<View style={styles.Icons} >
<Text style={styles.text2}>Akselerasjon</Text>
{this.DisplayAks()}
 </View>

 <View style={styles.Icons}>
 <Text style={styles.text2}>Spinn</Text>
 {this.DisplaySpinn()}
  </View>
</View>*/

      render(){
        //Siden for fremvisning av data
        if(this.state.Start==1){
          return(
            <>
           <View style={styles.Rad}>
                
             </View>

             <View style={styles.PlaceNewThrow}>
                      <TouchableOpacity style={styles.Btn}
                       onPress={this.ToHome}>
                       <Text style={styles.textStyle}>New throw</Text>
                      </TouchableOpacity>
              </View>
                     
              

                  <View style={styles.Bane}>
                    <View style={styles.Plassering}>
                      {this.placeDots()}
                    </View>

            </View>

            <View style={styles.containerSlider}>
                 <Slider step={1}
                value={this.state.value} minimumValue={this.state.minValue} 
                maximumValue={this.state.maxValue} 
                onValueChange={value=> this.setState({value})}
                onSlidingComplete={value=> this.setState({value})}
                 />

          
          </View>
          </>
          );

        } //Side for nedtelling //Legget til {this.CheckData()}
        if(this.state.Start==0){
          return(
            <View style={styles.Load}>
            <Text> Collecting data </Text>
            <Icon3 name="loader" size={30} />
            <Button title="ToData" onPress={this.changeScreen}/>
            <Text>{this.state.timer}</Text>
            {this.CheckData()}
            {this.CantConnect()}
            </View>
           
  
              )
          }

    }
}

//funksjon for å vise dataene i kolonnene øverst på skjermen

function ShowData(props){
    return(
  <View  style={styles.Kolonne} >
    <Text align='center'>{props.tittel}</Text>
      <View alignItems='center'>
      <Text>{props.data}</Text>
      </View>
  </View>
    )
}






//Styler siden
const styles = StyleSheet.create({
    container: {
   backgroundColor: 'transparent'
    },
    page1:{
      alignItems:'center',
      width:'30%',
      height:'10%',
      justifyContent:'center'
    },
  
  Bane:{
    position: 'absolute',
    alignSelf:'center',
      width:'65%',
      bottom:'10%',
      height:'80%',
      top:'10%',
      backgroundColor:'transparent',   
      alignItems: 'center',
      justifyContent: 'center', 
      borderWidth:1,
      borderColor:'black'
  },

  Rad:{
    backgroundColor:'transparent',
    position:'absolute',
    width: '100%',
    height: '6%',
    top: 15,
    flexDirection: 'row',
    justifyContent: 'space-between',
    borderBottomColor:'black',
    borderBottomWidth:2
  },

  
  Kolonne:{
    top: 0 ,
    height: 5,
    flexDirection: 'column',
  },

  Plassering:{
    flex:1,
    flexDirection: 'column-reverse',
    position:'absolute',
    height: '100%',
    bottom: 0, 
    width:'100%',
    alignContent: 'flex-end',
     alignItems: 'center',
     justifyContent: 'flex-start',
     backgroundColor: 'transparent',
     marginBottom:6
  },

  Info:{
    position:'absolute',
    height:'10%',
    width:'15%',
    top:'30%',
    backgroundColor:'ghostwhite',
    borderRadius:7,
    borderWidth:2,
    borderColor:'black',
    left:0,
    marginBottom:'50%',
    flexDirection:'column-reverse'

  },

  Icons:{
    alignItems:'center',
    flex:1,
    flexDirection:'column',
    borderBottomColor:'black',
    borderBottomWidth:1,
    borderTopColor:'black',
    borderTopWidth:1,
    justifyContent:'space-around'

  },

  PlaceNewThrow:{
    position: 'absolute',
    height:'6%',
    width:'14%',
    backgroundColor:'ghostwhite',
    top:'9%',
    borderColor:'black',
    borderWidth:1,
    borderRadius:10,
    left:1,
    justifyContent:'center'
  },

  PlaceStart:{
    position: 'absolute',
    height:'10%',
    width:'15%',
    backgroundColor:'ghostwhite',
    bottom:'84%',
    borderRadius:2,
    borderColor:'black',
    borderWidth:2,
    left:0,
    justifyContent:'center'
  },


  textStyle: {
    fontSize: 10,
    color: 'black',
  },
  
  text2:{
    fontSize: 8,
    color: 'black',
  },


    Btn: {
    backgroundColor: 'ghostwhite',
    padding: 10,
    marginVertical: 10,
    height:'70%',
    width: '95%',
    justifyContent:'center',

  },

    containerSlider: {
      alignSelf:'center',
      position: 'absolute',
      bottom:10,
      width:300,
      alignItems: "stretch",
      justifyContent: "center"
    },

    Load:{
      alignItems:'center',
      justifyContent:'center',
      width:'100%',
      height:'100%'
    }
 });