package com.yeyocastillo.AbstractFactory;

public class BumpInc implements GenericCompany {

	@Override
	public void orderParts(String brand, Integer quantity) {
		// TODO Auto-generated method stub
		Bumper parts;
		
		parts = manufactureBumper(brand, quantity);
		
		parts.bringPiecesFromInventory();
		parts.startAssemblyLine();
		parts.fillBatch();
		parts.cleanAssemblyLine();
	}

	@Override
	public Bumper manufactureBumper(String brand, Integer quantity) {
		if(brand.equals("VW")){
			return new VWBumper(quantity);
		} else if(brand.equals("Ford")) {
			return new FordBumper(quantity);
		} else if(brand.equals("Audi")){
			return new AudiBumper(quantity);
		} else if(brand.equals("BMW")){
			return new BMWBumper(quantity);
		} else return null;
		
		
	}
	@Override
	public Door manufactureDoor(String brand, Integer quantity) {
		// TODO Auto-generated method stub
		return null;
	}

}
