import React, { Component } from 'react';
import { StyleSheet, View, Text, TouchableOpacity, Alert } from 'react-native';
import { Table, TableWrapper, Row, Cell } from 'react-native-table-component';

export default class ShowConnect extends Component {
  constructor(props) {
    super(props);
    this.state = {
      tableHead: ['Devices Name', 'Connection Status', 'Button'],
      tableData: [
        ['', '', ''],
        ['', '', ''],
        ['', '', ''],
        ['', '', ''],
        ['', '', ''],
        ['', '', ''],
        ['', '', ''],
        ['', '', '']
      ],
      widthArr: [120,120,120]
    }
  }


  _alertIndex(index) {
    Alert.alert(`This is row ${index + 1}`);}

  render() {
    const state = this.state;
    const element = (data, index) => (
      <TouchableOpacity onPress={() => this._alertIndex(index)}>
        <View style={styles.btn}>
          <Text style={styles.btnText}>button</Text>
        </View>
      </TouchableOpacity>
    );

    return (
      <View style={styles.container}>
        <Table borderStyle={{borderColor: 'transparent'}}>
          <Row data={state.tableHead} style={styles.head} textStyle={styles.text}/>
          {
            state.tableData.map((rowData, index) => (
              <TableWrapper key={index} style={styles.row}>
                {
                  rowData.map((cellData, cellIndex) => (
                    <Cell key={cellIndex} data={cellIndex === 2 ? element(cellData, index) : cellData} textStyle={styles.text}/>
                  ))
                }
              </TableWrapper>
            ))
          }
        </Table>
      </View>
    )
  }
}

const styles = StyleSheet.create({
  container: {
  flex: 1, 
  padding: 16,
  backgroundColor: '#fff'
    },

  head: { height: 40, backgroundColor: '#808B97' },
  text: {
     margin: 6,
     textAlign: 'center',
     fontWeight: '200'
    },
  row: { flexDirection: 'row', backgroundColor: '#FFF1C1' },
  btn:{ width: 58, height: 18, backgroundColor: '#5d57ff',  borderRadius: 2, alignSelf: 'center'},
  btnText: { textAlign: 'center', color: '#fff' }
});