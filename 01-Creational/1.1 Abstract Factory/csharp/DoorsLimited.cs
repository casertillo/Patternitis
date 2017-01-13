using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    class DoorsLimited : GenericCompany
    {
        public Door manfuatureDoor(string brand, int quantity)
        {
            if (brand.Equals("VW"))
            {
                return new VWDoor(quantity);
            }
            else if (brand.Equals("Ford"))
            {
                return new FordDoor(quantity);
            }
            else if (brand.Equals("Audi"))
            {
                return new AudiDoor(quantity);
            }
            else if (brand.Equals("BMW"))
            {
                return new BMWDoor(quantity);
            }
            else return null;
        }

        public Bumper manufactureBumper(string brand, int quantity)
        {
            throw new NotImplementedException();
        }

        public void orderParts(string brand, int quantity)
        {
            Door parts;

            parts = manfuatureDoor(brand, quantity);

            parts.bringPiecesFromInventory();
            parts.startAssemblyLine();
            parts.fillBatch();
            parts.cleanAssemblyLine();
        }
    }
}
