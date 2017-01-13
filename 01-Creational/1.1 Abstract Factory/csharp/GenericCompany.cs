using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    interface GenericCompany
    {
        void orderParts(string brand, int quantity);
        Bumper manufactureBumper(string brand, int quantity);
        Door manfuatureDoor(string brand, int quantity);
    }
}
