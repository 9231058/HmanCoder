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

public class UnzipFactory {
	private static UnzipFactory instance;

	private String unzipClass;

	private UnzipFactory(){
		ConfigurationFactory factory = new ConfigurationFactory("config.xml");
		try {
			Configuration config = factory.getConfiguration();
			unzipClass = config.getString("UnzipClass", "home.parham.core.CppUnzip");
		} catch (ConfigurationException e) {
			e.printStackTrace();
			unzipClass = "home.parham.core.CppUnzip";
		}
	}

	public static UnzipFactory getInstance(){
		if (instance == null)
			instance = new UnzipFactory();
		return instance;
	}

	Unzip getUnzip(){
		try {
			return (Unzip) Class.forName(unzipClass).newInstance();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (InstantiationException e) {
			e.printStackTrace();
		} catch (IllegalAccessException e) {
			e.printStackTrace();
		}
		return new CppUnzip();
	}
}
