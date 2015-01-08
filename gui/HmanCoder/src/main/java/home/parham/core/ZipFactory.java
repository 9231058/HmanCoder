/*
 * In The Name Of God
 * ======================================
 * [] Project Name : HmanCoder 
 * 
 * [] Package Name : home.parham.core
 *
 * [] Creation Date : 08-01-2015
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/

package home.parham.core;

import org.apache.commons.configuration.Configuration;
import org.apache.commons.configuration.ConfigurationException;
import org.apache.commons.configuration.ConfigurationFactory;

public class ZipFactory {
	private static ZipFactory instance;

	private String zipClass;

	private ZipFactory(){
		ConfigurationFactory factory = new ConfigurationFactory("config.xml");
		try {
			Configuration config = factory.getConfiguration();
			zipClass = config.getString("ZipClass", "home.parham.core.CppZip");
		} catch (ConfigurationException e) {
			e.printStackTrace();
			zipClass = "home.parham.core.CppZip";
		}
	}

	public static ZipFactory getInstance(){
		if (instance == null)
			instance = new ZipFactory();
		return instance;
	}

	public Zip getZip(){
		try {
			return (Zip) Class.forName(zipClass).newInstance();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (InstantiationException e) {
			e.printStackTrace();
		} catch (IllegalAccessException e) {
			e.printStackTrace();
		}
		return new CppZip();
	}

}
