/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import model.Client;

/**
 *
 * @author Quoc Cuong
 */
public class ClientDAO extends DAO{
    public ClientDAO(){
        super();
    }
    
    public static ArrayList<Client> searchClient(String key){
        ClientDAO clientDAO = new ClientDAO();
        ArrayList<Client> result = new ArrayList<Client>();
        try {
            Statement st = clientDAO.con.createStatement();
            ResultSet rs = st.executeQuery("SELECT * FROM tbl_client where name LIKE '%" + key + "%'");
            while(rs.next()){
                Client client = new Client();
                client.setId(rs.getInt("id"));
                client.setIdCard(rs.getString("idcard"));
                client.setName(rs.getString("name"));
                client.setAddress(rs.getString("address"));
                client.setTel(rs.getString("tel"));
                client.setEmail(rs.getString("email"));
                result.add(client);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return result;
    }
//    public static void main(String[] args) {
//        ArrayList<Client> list = new ArrayList<Client>();
//        list = searchClient("A");
//        for(Client client : list){
//            System.out.println(client.getName());
//        }
//    }
}
