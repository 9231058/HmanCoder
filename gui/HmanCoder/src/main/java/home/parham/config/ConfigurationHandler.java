package home.parham.config;/*
 * In The Name Of God
 * ======================================
 * [] Project Name : HmanCoder 
 * 
 * [] Package Name : home.parham.config
 *
 * [] Creation Date : 13-01-2015
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/

import org.apache.commons.configuration.ConfigurationException;
import org.apache.commons.configuration.FileConfiguration;
import org.apache.commons.configuration.XMLConfiguration;

public class ConfigurationHandler {
	private static ConfigurationHandler instance = null;
	private static XMLConfiguration config;

	public static ConfigurationHandler getInstance(){
		if(instance == null) {
			instance = new ConfigurationHandler();
		}
		return instance;
	}

	private ConfigurationHandler(){
		try {
			config = new XMLConfiguration("config.xml");
		} catch (ConfigurationException e) {
			e.printStackTrace();
		}
	}

	public FileConfiguration getConfiguration(){
		return config;
	}
}
