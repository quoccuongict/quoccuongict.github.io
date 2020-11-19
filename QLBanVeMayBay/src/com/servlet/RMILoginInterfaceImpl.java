/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.servlet;

import com.dao.FlightDAO;
import com.dao.UserDAO;
import com.model.Flight;
import com.model.User;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.sql.Date;
import java.util.ArrayList;

/**
 *
 * @author Quoc Cuong
 */
public class RMILoginInterfaceImpl extends UnicastRemoteObject implements RMILoginInterface{
    public RMILoginInterfaceImpl() throws RemoteException{
        
    }
    @Override
    public User checkLogin(String username, String password) throws RemoteException {
        UserDAO ud = new UserDAO();
        User user = ud.checkUser(username, password);
        return user;
    }

    @Override
    public ArrayList<Flight> getFlight(Date date) throws RemoteException {
        FlightDAO fd = new FlightDAO();
        ArrayList<Flight> listFlight = new ArrayList<>();
        listFlight = fd.selectFlight(date);
        return listFlight;
    }

    @Override
    public boolean addFlight(Flight flight) throws RemoteException {
        FlightDAO fd = new FlightDAO();
        return fd.insertFlight(flight);
    }
    
}
