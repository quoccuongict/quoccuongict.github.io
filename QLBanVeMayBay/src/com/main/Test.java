/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.main;

import com.dao.FlightDAO;
import com.model.Flight;
import com.model.User;
import com.servlet.RMILoginInterface;
import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.sql.Date;
import java.sql.Time;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Quoc Cuong
 */
public class Test {
    public static void main(String[] args) {
//        try {
//            RMILoginInterface instance = (RMILoginInterface) Naming.lookup("rmi://localhost:6899/LOGIN1");
//            User user = new User();
//            user.setUsername("admin");
//            user.setPassword("admin");
//            boolean result = instance.checkLogin(user);
//            if(result){
//                System.out.println("OK");
//                System.out.println(user.getPosition());
//            }
//            else{
//                System.out.println("NOT OK");
//            }
//        } catch (NotBoundException ex) {
//            Logger.getLogger(Test.class.getName()).log(Level.SEVERE, null, ex);
//        } catch (MalformedURLException ex) {
//            Logger.getLogger(Test.class.getName()).log(Level.SEVERE, null, ex);
//        } catch (RemoteException ex) {
//            Logger.getLogger(Test.class.getName()).log(Level.SEVERE, null, ex);
//        }
        //        FlightDAO fd = new FlightDAO();
//        ArrayList<Flight> listFlight = new ArrayList<>();
//        Date date = Date.valueOf("2020-11-01");
//        System.out.println(date);
//        listFlight = fd.selectFlight(date);
//        for(Flight flight: listFlight){
//            System.out.println(flight);
//        }
//        Flight fl = new Flight();
//        fl.setSohieu("VN08");
//        fl.setNgaybay(Date.valueOf("2020-11-01"));
//        fl.setGiobay(Time.valueOf("09:30:20"));
//        fl.setNoidi("Nha Trang");
//        fl.setNoiden("Hà Nội");
//        fl.setThbay(Time.valueOf("01:45:00"));
//        fl.setTongghe(300);
//        fl.setSoghedaban(50);
//        fl.setSoghecontrong(250);
//        boolean result = fd.insertFlight(fl);
//        System.out.println(result);
    }
}
