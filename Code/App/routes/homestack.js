import {createStackNavigator} from 'react-navigation-stack'
import {createAppContainer} from 'react-navigation'
import ShowConnect from '../screens/Screen1'
import Home from '../screens/Home'
import ReadData from '../screens/ReadData'

//Side for å bytte mellom de ulike skjermene
const screens={

    Home:{
        screen:Home,
        navigationOptions: { headerShown: false }
    },

    Connections:{
        screen: ShowConnect
    },

    ReadData:{
        screen: ReadData,
        navigationOptions: { headerShown: false }

    }
}

const HomeStack=createStackNavigator(screens)

export default createAppContainer(HomeStack)