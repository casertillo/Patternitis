using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    abstract class Door
    {
        int totalNumberofParts;
        protected Door(int numberofParts)
        {
            this.totalNumberofParts = numberofParts;
        }
        public void startAssemblyLine()
        {
            Console.WriteLine("Starting assembly line for Doors...");
        }
        public void fillBatch()
        {
            for (int i = 1; i <= totalNumberofParts; i++)
            {
                Console.WriteLine("part " + i + " finished...");
                Console.WriteLine("part " + i + " painted...");
                Console.WriteLine("part " + i + " stored...");
            }
        }
        public void cleanAssemblyLine()
        {
            Console.WriteLine("Cleaning working area...");
        }
        public abstract void bringPiecesFromInventory();
    }
}
