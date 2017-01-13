package com.yeyocastillo.AbstractFactory;

public class BMWBumper extends Bumper {

	BMWBumper(Integer numberofParts) {
		super(numberofParts);
		// TODO Auto-generated constructor stub
	}

	@Override
	protected void bringPiecesFromInventory() {
		System.out.println("gathering all the pieces to manufacture: Bumper for BMW");

	}

}
