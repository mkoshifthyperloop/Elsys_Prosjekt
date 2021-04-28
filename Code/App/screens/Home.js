import React, { Component } from 'react'
import {View,TouchableOpacity,Text,StyleSheet, Linking} from 'react-native'


export default function Home({navigation}){

    //Signalisere til MCU at et kast skal startes
    const ToNext=()=>{
        fetch('http://192.168.43.8:5000/play', {
            method: 'GET',
            //Request Type
          })
        navigation.navigate('ReadData')
        }


    //Endre side til Connections
    const ToTable=()=>{
        navigation.navigate('Connections')
    }

        return(
                <View style={styles.ContainerMiddle}>
                    <TouchableOpacity style={styles.Btn} onPress={ToNext}>
                        <Text>Play</Text>
                    </TouchableOpacity>

                    <TouchableOpacity style={styles.Btn} onPress={ToTable}>
                    <Text>Devices</Text>
                    </TouchableOpacity>

                    <TouchableOpacity style={styles.Btn} onPress={()=>{ Linking.openURL('https://www.tsn.ca/curling')}}>
                    <Text>Latest Curling News</Text>
                    </TouchableOpacity>
                </View>

        )
}

//Styling av siden
const styles = StyleSheet.create({
  
    ContainerMiddle: {
      width:'100%',
      height: '100%',
      backgroundColor: 'transparent',
      alignItems:'center',
      justifyContent:'center',
      flexDirection:'column'
    
    },

    Btn:{
        backgroundColor:'grey',
        width:'40%',
        borderRadius:10,
        borderWidth:2,
        borderColor:'black',
        height:'5%',
        justifyContent:'center',
        alignItems:'center',
        marginTop:20
    }

})