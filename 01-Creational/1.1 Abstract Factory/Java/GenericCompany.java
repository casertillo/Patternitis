package com.yeyocastillo.AbstractFactory;

public interface GenericCompany {
	void orderParts(String brand, Integer quantity);
	Bumper manufactureBumper(String brand, Integer quantity);
	Door manufactureDoor(String brand, Integer quantity);
}
