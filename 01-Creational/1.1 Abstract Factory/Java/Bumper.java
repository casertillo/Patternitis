package com.yeyocastillo.AbstractFactory;

public abstract class Bumper {
	Integer totalNumberofParts;
	
	Bumper(Integer numberofParts){
		this.totalNumberofParts = numberofParts;
	}

	void startAssemblyLine(){
		System.out.println("Starting Assembly Line..");
	}
	
	void fillBatch(){
		for (int i =1; i <= totalNumberofParts; i++)
		{
			System.out.println("part "+ i +" finished..");
			System.out.println("part "+ i +" painted..");
			System.out.println("part "+ i +" stored..");
		}
	}
	void cleanAssemblyLine(){
		System.out.println("Cleaning working area...");
	}
	protected abstract void bringPiecesFromInventory();
}
