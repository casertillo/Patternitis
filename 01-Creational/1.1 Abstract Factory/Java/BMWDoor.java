package com.yeyocastillo.AbstractFactory;

public class BMWDoor extends Door {

	BMWDoor(Integer numberofParts) {
		super(numberofParts);
		// TODO Auto-generated constructor stub
	}

	@Override
	protected void bringPiecesFromInventory() {
		System.out.println("gathering all the pieces to manufacture: Door for BMW");

	}

}
