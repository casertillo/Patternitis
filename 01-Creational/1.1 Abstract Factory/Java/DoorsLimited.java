package com.yeyocastillo.AbstractFactory;

public class DoorsLimited implements GenericCompany {


	@Override
	public void orderParts(String brand, Integer quantity) {
		// TODO Auto-generated method stub
		Door parts;
		
		parts = manufactureDoor(brand, quantity);
		
		parts.bringPiecesFromInventory();
		parts.startAssemblyLine();
		parts.fillBatch();
		parts.cleanAssemblyLine();
	}
	
	@Override
	public Door manufactureDoor(String brand, Integer quantity) {
		if(brand.equals("VW")){
			return new VWDoor(quantity);
		} else if(brand.equals("Ford")) {
			return new FordDoor(quantity);
		} else if(brand.equals("Audi")){
			return new AudiDoor(quantity);
		} else if(brand.equals("BMW")){
			return new BMWDoor(quantity);
		} else return null;
	}

	@Override
	public Bumper manufactureBumper(String brand, Integer quantity) {
		// TODO Auto-generated method stub
		return null;
	}
}
