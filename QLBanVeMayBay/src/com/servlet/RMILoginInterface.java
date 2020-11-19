/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.servlet;

import com.model.Flight;
import com.model.User;
import java.rmi.Remote;
import java.rmi.RemoteException;
import java.sql.Date;
import java.util.ArrayList;

/**
 *
 * @author Quoc Cuong
 */
public interface RMILoginInterface extends Remote{
    public User checkLogin(String username, String password) throws RemoteException;
    public ArrayList<Flight> getFlight(Date date) throws RemoteException;
    public boolean addFlight(Flight flight) throws RemoteException;
}
