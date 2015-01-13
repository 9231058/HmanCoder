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

public class UnzipFactory {
	private static UnzipFactory instance;

	private String unzipClass;

	private UnzipFactory(){
		unzipClass = ConfigurationHandler.getInstance().getConfiguration().getString("UnzipClass", "home.parham.core.CppUnzip");
	}

	public static UnzipFactory getInstance(){
		if (instance == null)
			instance = new UnzipFactory();
		return instance;
	}

	public Unzip getUnzip(){
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
