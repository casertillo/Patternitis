using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    class AudiDoor:Door
    {
        public AudiDoor(int numberofParts) : base(numberofParts) { }

        public override void bringPiecesFromInventory()
        {
            Console.WriteLine("gathering all the pieces to manufacture: Door for Audi");
        }
    }
}
