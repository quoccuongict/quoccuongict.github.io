/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;
import model.User;

/**
 *
 * @author Quoc Cuong
 */
public class UserDAO extends DAO{
    public UserDAO() {
        super();
    }
    public boolean checkLogin(User user){
        boolean result = false;
        UserDAO userDAO = new UserDAO();
        try {
            Statement st = userDAO.con.createStatement();
            ResultSet rs = st.executeQuery("SELECT id, fullname, position FROM tbl_user where username = '" + user.getUsername() + "' AND password = '" + user.getPassword() + "'");
            if(rs.next()){
                user.setId(rs.getInt("id"));
                user.setFullname(rs.getString("fullname"));
                user.setPosition(rs.getString("position"));
                result = true;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return result;
    }
    

}
