using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    class BumpInc : GenericCompany
    {
        public Door manfuatureDoor(string brand, int quantity)
        {
            throw new NotImplementedException();
        }

        public Bumper manufactureBumper(string brand, int quantity)
        {
            if (brand.Equals("VW"))
            {
                return new VWBumper(quantity);
            }else if (brand.Equals("Ford"))
            {
                return new FordBumper(quantity);
            }else if(brand.Equals("Audi"))
            {
                return new AudiBumper(quantity);
            }else if (brand.Equals("BMW"))
            {
                return new BMWBumper(quantity);
            }
            else return null;
        }

        public void orderParts(string brand, int quantity)
        {
            Bumper parts;

            parts = manufactureBumper(brand, quantity);

            parts.bringPiecesFromInventory();
            parts.startAssemblyLine();
            parts.fillBatch();
            parts.cleanAssemblyLine();
        }
    }
}
