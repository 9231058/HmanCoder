/*
 * In The Name Of God
 * ======================================
 * [] Project Name : HmanCoder 
 * 
 * [] Package Name : home.parham.gui
 *
 * [] Creation Date : 08-01-2015
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/

package home.parham.gui;

import home.parham.core.Unzip;
import home.parham.core.UnzipFactory;
import home.parham.core.Zip;
import home.parham.core.ZipFactory;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;

public class MainForm {
	private JTextField addressField;
	private JButton browseButton;
	private JButton unzipButton;
	private JButton zipButton;
	private JButton helpButton;
	private JButton exitButton;
	private JPanel panel;

	private File inputFile;

	public static void main(String[] args){
		JFrame frame = new JFrame("MainForm");
		frame.setContentPane(new MainForm().panel);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.pack();
		frame.setVisible(true);
	}

	public MainForm(){

		browseButton.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent actionEvent){
				JFileChooser fileChooser = new JFileChooser();
				fileChooser.showOpenDialog(MainForm.this.panel);
				inputFile = fileChooser.getSelectedFile();
				if (inputFile != null)
					addressField.setText(inputFile.getAbsolutePath());
			}
		});
		zipButton.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent actionEvent){
				Zip zipper = ZipFactory.getInstance().getZip();
				zipper.setPath(inputFile.getPath());
				new Thread(zipper).start();
			}
		});

		unzipButton.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent actionEvent){
				Unzip unzipper = UnzipFactory.getInstance().getUnzip();
				unzipper.setPath(inputFile.getPath());
				new Thread(unzipper).start();
			}
		});

		exitButton.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent actionEvent){
				System.exit(0);
			}
		});
	}
}
