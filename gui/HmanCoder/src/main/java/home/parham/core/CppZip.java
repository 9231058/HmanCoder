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

import java.io.IOException;

public class CppZip implements Zip {

	private String path;

	@Override
	public void setPath(String path){
		this.path = path;
	}

	@Override
	public void run(){
		try {
			Process p = Runtime.getRuntime().exec("./HmanCoder -i " + path + " -o " + path +  ".zip");
			p.waitFor();
		} catch (IOException e) {
			e.printStackTrace();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
}
