package com.yeyocastillo.AbstractFactory;

public class AudiBumper extends Bumper {

	AudiBumper(Integer numberofParts) {
		super(numberofParts);
		// TODO Auto-generated constructor stub
	}

	@Override
	protected void bringPiecesFromInventory() {
		System.out.println("gathering all the pieces to manufacture: Bumper for Audi");

	}

}
