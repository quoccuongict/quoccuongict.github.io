/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.dao;

import com.model.User;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Quoc Cuong
 */
public class UserDAO {
    Connection con = null;
    public ArrayList<User> selectUser(){
        con = DBConnection.getConnection();
        ArrayList<User> listUser = new ArrayList<>();
        try {
            Statement st = con.createStatement();
            ResultSet rs = st.executeQuery("select * from tbl_user");
            
            while(rs.next()){
                User user = new User(rs.getInt("id"), rs.getString("username"), rs.getString("password"), rs.getString("fullname"), rs.getString("position"));
                listUser.add(user);
            }
        } catch (SQLException ex) {
            Logger.getLogger(UserDAO.class.getName()).log(Level.SEVERE, null, ex);
        }
        return listUser;
    }
    
    public User checkUser(String username, String password){
        con = DBConnection.getConnection();
        User user = null;
        try {
            Statement st = con.createStatement();
            ResultSet rs = st.executeQuery("SELECT id, fullname, position FROM tbl_user where username = '" 
                    + username + "' AND password = '" + password + "'");
            if(rs.next()){
                user = new User();
                user.setId(rs.getInt("id"));
                user.setFullname(rs.getString("fullname"));
                user.setPosition(rs.getString("position"));
                user.setUsername(username);
                user.setPassword(password);
            }
        } catch (SQLException ex) {
            Logger.getLogger(UserDAO.class.getName()).log(Level.SEVERE, null, ex);
        }
        return user;
    }
}
