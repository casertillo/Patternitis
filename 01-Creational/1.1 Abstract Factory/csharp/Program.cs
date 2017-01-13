using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    class Program
    {
        static void Main(string[] args)
        {
            GenericCompany BumpInc = new BumpInc();
            GenericCompany DoorsLTD = new DoorsLimited();

            BumpInc.orderParts("VW", 5);
            BumpInc.orderParts("Ford", 3);
            BumpInc.orderParts("BMW", 2);

            DoorsLTD.orderParts("Audi", 4);
            DoorsLTD.orderParts("VW", 8);
            DoorsLTD.orderParts("BMW", 3);
            Console.ReadLine();
        }
    }
}
