/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Quoc Cuong
 */
public class DAO {
    public static Connection con;
    public DAO(){
        if(con == null){
            String dbUrl = "jdbc:mysql://localhost:3306/qlspa?autoReconnect=true&useSSL=false";
            String dbClass = "com.mysql.jdbc.Driver";
            try {
                Class.forName(dbClass);
                con = DriverManager.getConnection (dbUrl, "root", "Cuongict12345");
            }catch(Exception e) {
                e.printStackTrace();
            }
        }
    }
    
    public static void main(String[] args) {
        DAO d = new DAO();
        try {
            Statement st = d.con.createStatement();
            ResultSet rs = st.executeQuery("SELECT id FROM tbl_client");
            while(rs.next()){
                System.out.println(rs.getInt("id"));
            }
        } catch (SQLException ex) {
            Logger.getLogger(DAO.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
}
