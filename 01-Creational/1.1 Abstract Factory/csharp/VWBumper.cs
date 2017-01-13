using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    class VWBumper:Bumper
    {
         public VWBumper(int numberofParts) : base(numberofParts) { }

        public override void bringPiecesFromInventory()
        {
            Console.WriteLine("gathering all the pieces to manufacture: Bumper for VW");
        }
    }
}
