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

import home.parham.config.ConfigurationHandler;

public class ZipFactory {
	private static ZipFactory instance;

	private String zipClass;

	private ZipFactory(){
		zipClass = ConfigurationHandler.getInstance().getConfiguration().getString("Zip-Definition.ZipClass", "home.parham.core.CppZip");
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
