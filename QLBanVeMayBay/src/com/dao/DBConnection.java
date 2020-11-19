/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Quoc Cuong
 */
public class DBConnection {
    private static Connection con = null;
    public static Connection getConnection(){
        String dbUrl = "jdbc:mysql://localhost:3306/qlhtbanve?autoReconnect=true&useSSL=false";
        String dbUser = "root";
        String dbPassword = "Cuongict12345";
        try {
            Class.forName("com.mysql.jdbc.Driver");
            con = DriverManager.getConnection(dbUrl, dbUser, dbPassword);
        } catch (ClassNotFoundException ex) {
            ex.printStackTrace();
//            Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
        } catch (SQLException ex) {
            ex.printStackTrace();
//            Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
        }
        return con;
    }
    
    public static void closeConnection(){
        if(con != null){
            try {
                con.close();
            } catch (SQLException ex) {
                Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
