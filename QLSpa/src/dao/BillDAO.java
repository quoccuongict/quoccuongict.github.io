/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import model.Bill;

/**
 *
 * @author Quoc Cuong
 */
public class BillDAO extends DAO{
    public BillDAO(){
        super();
    }
    
    public boolean addBill(Bill bill){
        BillDAO billDAO = new BillDAO();
        try {
            Statement st = billDAO.con.createStatement();
            Date date = new Date();
            date = bill.getPaymentDate();
            Timestamp ts=new Timestamp(date.getTime());  
            SimpleDateFormat formatter = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");  
//            System.out.println(formatter.format(ts));
            String sql = "INSERT INTO tbl_bill(paymentdate, paymenttype, amount, idbooking,iduser) VALUES('" + formatter.format(ts) + "', '" + bill.getPaymentType() + "', " + bill.getAmount()  + ", " + bill.getIdBooking() + ", " + bill.getIdUser() + ");";
            st.executeUpdate(sql);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return true;
    }
}
