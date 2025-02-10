#include <iostream>
#include "string"
using namespace std;
#include "ctime"

void menu();
void exit()
{
    cout << "Thank you for using New Generation `25" << endl;
    cout << "Goodbye!" << endl;
}


void countdown()
{
    time_t now = time(0);
    tm nextNewYear = {0};
    tm localTime;
    localtime_s(&localTime, &now);
    nextNewYear.tm_year = localTime.tm_year + 1;
    nextNewYear.tm_mon = 0;
    nextNewYear.tm_mday = 1;
    double secondsLeft = difftime(mktime(&nextNewYear), now);
    cout << "Time left until next New Year: " << endl;
    cout << secondsLeft / (60 * 60 * 24) << " days, " << endl;
    cout  << ((int)secondsLeft / (60 * 60)) % 24 << " hours, "  << endl;
    cout << ((int)secondsLeft / 60) % 60 << " minutes, " << endl;
    cout << (int)secondsLeft % 60 << " seconds." << endl;
    cout << endl;
    cout << endl;
        menu();
}

int wishes() {
    srand(time(nullptr));
        
        const int NUM_WISHES = 10;
        string wishes[NUM_WISHES] = {
            "May your nightmares become your waking reality in the coming year.",
            "May you dance on the edge of chaos and emerge unscathed, laughing in the face of your deepest fears.",
            "Here's to another year of crushed dreams and bitter disappointments.",
            "May the new year bring you unexpected triumphs that shatter your self-imposed limitations.",
            "May you ruthlessly climb to the top, leaving your competitors in the dust of your ambition.",
            "Wishing you a year of spectacular failures that strip away your delusions of competence.",
            "May your terror of the unknown propel you into a future brighter than you dare imagine.",
            "May your reckless courage lead you to glorious catastrophes that reshape your world.",
            "As you reach for the stars, may the abyss below remind you of the price of failure."
        };
        int randomIndex = rand() % NUM_WISHES;
        string selectedWish = wishes[randomIndex];
        cout << "Your New Year's wish: " << selectedWish << endl;
    cout << endl;
    menu();

    return 0;
}

void wishesF()
{
    int sign;
    cout << "Say me your sign number and I will tell you your fate"<< endl;
    cout << "1. Aries" << endl;
    cout << "2. Taurus" << endl;
    cout << "3. Gemini" << endl;
    cout << "4. Cancer" << endl;
    cout << "5. Leo" << endl;
    cout << "6. Virgo" << endl;
    cout << "7. Libra" << endl;
    cout << "8. Scorpio" << endl;
    cout << "9. Sagittarius" << endl;
    cout << "10. Capricorn" << endl;
    cout << "11. Aquarius" << endl;
    cout << "12. Pisces" << endl;
    cin >> sign;
    if (sign == 1)
    {
        cout << "May your impulsiveness lead you to glorious victories or spectacular disasters. Either way, you won't be bored." << endl;
    }
    if ( sign == 2)
    {
        cout << "Your stubbornness might be your downfall or your salvation this year. Good luck figuring out which is which." << endl;
    }
    if ( sign == 3)
    {
        cout << "May your dual nature bring you twice the opportunities or double the troubles. Embrace the chaos." << endl;
    }
    if ( sign == 4)
    {
        cout << "Your emotional depth could drown you or elevate you to new heights. Don't forget to come up for air." << endl;
    }
    if ( sign == 5)
    {
            cout << "Your need for attention might finally pay off... or leave you more alone than ever. Roar at your own risk." << endl;
    }
    if ( sign == 6)
    {
        cout << "Your perfectionism could be your superpower or your kryptonite this year. Choose wisely." << endl;
    }
    if ( sign == 7)
    {
        cout << "May your indecisiveness lead you to miss golden opportunities or save you from disastrous choices. Flip a coin." << endl;
    }
    if ( sign == 8)
    {
        cout << "Your intensity might magnetize success or repel everyone around you. Prepare for extremes." << endl;
    }
    if ( sign == 9)
    {
        cout << "Your optimism could be your ticket to adventure or your path to disappointment. Aim high, but watch for cliffs." << endl;
    }
    if ( sign == 10)
    {
        cout << "Your ambition might propel you to the top or leave you crushed under the weight of expectations. Climb carefully." << endl;
    }
    if ( sign == 11)
    {
        cout << "Your uniqueness could revolutionize the world or alienate everyone you know. Embrace the unknown." << endl;
    }
    if ( sign == 12)
    {
        cout << "Your imagination might lead you to create masterpieces or lose touch with reality entirely. Swim at your own risk." << endl;
    }
    else if (sign > 12|| sign < 1)
    {
        cout << "Then we dont concur with your opinion, get out." << endl;
        cout << endl;
        exit();
    }
    cout << endl;
    menu();
}

    
int wishesTH()
    {
        srand(time(nullptr));
        
        const int NUM_WISHES = 534;
        string wishes[NUM_WISHES] = {
            "Internal Combustion Engine", "Electric Motor", "Steam Engine", "Jet Engine", "Rocket Engine", "Nuclear Reactor", "Wind Turbine", "Solar Panel", "Water Wheel", "Lever", "Wheel and Axle", "Pulley", "Inclined Plane", "Wedge", "Screw", "Gear", "Spring", "Battery", "Transformer", "Transistor", "Integrated Circuit", "Microprocessor", "Computer", "Smartphone", "Television", "Radio", "Telephone", "Internet", "World Wide Web", "Email", "Satellite", "Telescope", "Microscope", "X-ray Machine", "MRI Machine", "CAT Scan", "Ultrasound Machine", "Stethoscope", "Syringe", "Scalpel", "Anesthesia Machine", "Pacemaker", "Defibrillator", "Wheelchair", "Prosthetic Limb", "Automobile", "Airplane", "Helicopter", "Ship", "Submarine", "Train", "Bicycle", "Motorcycle", "Tractor", "Combine Harvester", "Plow", "Seed Drill", "Irrigation System", "Greenhouse", "Refrigerator", "Washing Machine", "Dishwasher", "Oven", "Microwave Oven", "Vacuum Cleaner", "Sewing Machine", "Printing Press", "Typewriter", "Camera", "Projector", "Light Bulb", "LED", "Laser", "Cement", "Concrete", "Steel", "Glass", "Plastic", "Textile", "Paper", "Clock", "Compass", "Sextant", "Radar", "Sonar", "GPS", "Drone", "Robot", "3D Printer", "CNC Machine", "Assembly Line", "Forklift", "Crane", "Elevator", "Escalator", "Air Conditioner", "Heater", "Fireplace", "Gun", "Nuclear Bomb",
            "T-34", "M4 Sherman", "Panzer V Panther", "T-54/55", "M1 Abrams", "Leopard 2", "Challenger 2", "T-90", "Merkava", "AMX-56 Leclerc", "IS-3", "Tiger I", "King Tiger", "Centurion", "Chieftain", "M60 Patton", "T-62", "T-72", "Arjun", "K2 Black Panther", "Type 90", "Stridsvagn 122", "Ariete", "CV90", "BMP-1", "Bradley", "Warrior", "Puma", "Kurganets-25", "Armata", "P-51 Mustang", "Supermarine Spitfire", "Messerschmitt Bf 109", "Mitsubishi A6M Zero", "Boeing B-17 Flying Fortress", "Avro Lancaster", "Junkers Ju 87 Stuka", "North American P-51 Mustang", "F-15 Eagle", "F-16 Fighting Falcon", "F-22 Raptor", "Sukhoi Su-27", "Mikoyan MiG-29", "Dassault Rafale", "Eurofighter Typhoon", "Saab JAS 39 Gripen", "Lockheed Martin F-35 Lightning II", "Boeing F/A-18E/F Super Hornet", "General Dynamics F-16 Fighting Falcon", "McDonnell Douglas F-15 Eagle", "USS Nimitz", "HMS Queen Elizabeth", "Charles de Gaulle", "Admiral Kuznetsov", "Liaoning", "USS Enterprise (CVN-65)", "HMS Victory", "USS Constitution", "Bismarck", "Yamato", "Tirpitz", "Iowa-class battleship", "Yamato-class battleship", "Vanguard-class battleship", "Richelieu-class battleship", "Littorio-class battleship", "King George V-class battleship", "North Carolina-class battleship", "South Dakota-class battleship", "Alaska-class large cruiser", "USS Iowa", "USS Missouri", "USS Wisconsin", "USS New Jersey", "HMS Hood", "HMS Prince of Wales", "HMS King George V", "Bismarck", "Tirpitz", "Yamato", "Musashi", "Nagato", "Mutsu", "Colorado", "Maryland", "West Virginia", "North Carolina", "Washington", "South Dakota", "Indiana", "Destroyer (e.g., Arleigh Burke-class)", "Cruiser (e.g., Ticonderoga-class)", "Submarine (e.g., Ohio-class)", "Aircraft Carrier (e.g., Ford-class)", "Amphibious Assault Ship (e.g., Wasp-class)", "Frigate (e.g., Oliver Hazard Perry-class)", "Corvette (e.g., Visby-class)", "Minesweeper (e.g., Avenger-class)", "Patrol Boat (e.g., Cyclone-class)", "Landing Craft (e.g., LCAC)",
            "Refrigerator", "Oven", "Microwave Oven", "Dishwasher", "Washing Machine", "Dryer", "Vacuum Cleaner", "Blender", "Food Processor", "Mixer", "Toaster", "Coffee Maker", "Kettle", "Rice Cooker", "Slow Cooker", "Pressure Cooker", "Stove", "Cooktop", "Range Hood", "Garbage Disposal", "Iron", "Ironing Board", "Sewing Machine", "Hair Dryer", "Hair Straightener", "Curling Iron", "Electric Toothbrush", "Scale", "Television", "Computer", "Laptop", "Tablet", "Smartphone", "Router", "Modem", "Printer", "Scanner", "Fax Machine", "Telephone", "Answering Machine", "Alarm Clock", "Thermostat", "Air Conditioner", "Heater", "Humidifier", "Dehumidifier", "Fan", "Light Bulb", "Lamp", "Flashlight", "Batteries", "Extension Cord", "Power Strip", "Tools", "Hammer", "Screwdriver", "Wrench", "Pliers", "Drill", "Saw", "Measuring Tape", "Level", "Paintbrush", "Roller", "Ladder", "Lawnmower", "Weed Whacker", "Leaf Blower", "Garden Hose", "Sprinkler", "Shovel", "Rake", "Hoe", "Wheelbarrow", "Grill", "Outdoor Furniture", "Vacuum Cleaner", "Mop", "Broom", "Dustpan", "Cleaning Supplies", "Laundry Detergent", "Dish Soap", "Paper Towels", "Toilet Paper", "Trash Bags", "First Aid Kit", "Fire Extinguisher", "Smoke Detector", "Carbon Monoxide Detector", "Security System", "Doorbell", "Garage Door Opener", "Ceiling Fan", "Chandelier", "Wall Sconce", "Table Lamp", "Floor Lamp", "Smart Home Devices", "Smart Speaker", "Smart Thermostat", "Smart Lighting", "Security Camera", "Robot Vacuum", "3D Printer", "CNC Machine", "Photocopier", "Projector", "Interactive Whiteboard", "Cash Register", "Barcode Scanner", "Point of Sale System", "Office Chair", "Desk", "Filing Cabinet", "Conference Table", "Whiteboard", "Bulletin Board", "Presentation Remote", "Laminator", "Shredder",
            "Megaphone", "Microphone", "Amplifier", "Speaker", "Radio Transmitter", "Radio Receiver", "Television Transmitter", "Television Receiver", "Telephone", "Cell Phone", "Walkie-Talkie", "Intercom", "P.A. System", "Dictaphone", "Tape Recorder", "Record Player", "CD Player", "MP3 Player", "Voice Recorder", "Speech Synthesizer", "Text-to-Speech Software", "Voice Recognition Software", "Translator Device", "Interpreter Headset", "Lip Microphone", "Wireless Microphone", "Lavalier Microphone", "Boom Microphone", "Shotgun Microphone", "Condenser Microphone", "Dynamic Microphone", "Ribbon Microphone", "Headset Microphone", "Studio Monitor", "Sound Mixer", "Audio Interface", "Equalizer", "Compressor", "Reverb Unit", "Delay Unit", "Noise Gate", "Audio Editing Software", "Digital Audio Workstation (DAW)", "MIDI Keyboard", "Synthesizer", "Sampler", "Drum Machine", "Sequencer", "Metronome", "Tuning Fork", "Pitch Pipe", "Guitar Tuner", "Microtuner", "Stroboscope", "Ocarina", "Recorder", "Flute", "Clarinet", "Oboe", "Bassoon", "Saxophone", "Trumpet", "Trombone", "French Horn", "Tuba", "Violin", "Viola", "Cello", "Double Bass", "Harp", "Guitar", "Bass Guitar", "Piano", "Keyboard", "Drum Kit", "Percussion Instruments", "Weapon", "Sword", "Knife", "Spear", "Axe", "Hammer", "Bow and Arrow", "Crossbow", "Catapult", "Ballista", "Trebuchet", "Cannon", "Gun", "Rifle", "Pistol", "Machine Gun", "Grenade", "Mortar", "Rocket Launcher", "Tank", "Armored Vehicle", "Warship", "Battleship", "Aircraft Carrier", "Submarine", "Fighter Jet", "Bomber", "Helicopter", "Missile", "Torpedo", "Mine", "Claymore", "Shield", "Armor", "Helmet", "Chainmail", "Plate Armor", "Artillery", "Siege Engine", "Fortification", "Trench", "Barbed Wire", "Landmine", "IED", "CBRN Weapon", "Nuclear Weapon", "Biological Weapon", "Chemical Weapon", "Stove", "Oven", "Microwave", "Refrigerator", "Blender", "Food Processor", "Mixer", "Toaster", "Coffee Maker", "Kettle", "Rice Cooker", "Slow Cooker", "Pressure Cooker", "Grill", "Smoker", "Deep Fryer", "Waffle Iron", "Pancake Griddle", "Immersion Blender", "Food Scale", "Measuring Cups", "Measuring Spoons", "Mixing Bowls", "Knives", "Cutting Board", "Pots", "Pans", "Baking Sheets", "Casserole Dish", "Dutch Oven", "Wok", "Mortar and Pestle", "Rolling Pin", "Whisk", "Spatula", "Tongs", "Ladle", "Slotted Spoon", "Wooden Spoon", "Can Opener", "Bottle Opener", "Corkscrew", "Peeler", "Grater", "Zester", "Colander", "Sieve", "Strainer", "Food Mill", "Meat Grinder", "Pasta Maker", "Ice Cream Maker", "Yogurt Maker", "Bread Machine", "Juicer", "Blender", "Food Dehydrator", "Sous Vide Immersion Circulator", "Thermometer", "Timer", "Oven Mitts", "Apron", "Cutting Board", "Chef's Knife", "Paring Knife", "Serrated Knife", "Boning Knife", "Cleaver", "Carving Knife",
            "Boxing", "Kickboxing", "Muay Thai", "Taekwondo", "Karate", "Judo", "Brazilian Jiu-Jitsu", "Wrestling", "Aikido", "Kung Fu", "Wing Chun", "Jeet Kune Do", "MMA (Mixed Martial Arts)", "Capoeira", "Krav Maga", "Sambo", "Hapkido", "Ninjutsu", "Kendo", "Iaido"
        };
        int randomIndex = rand() % NUM_WISHES;
        string selectedWish = wishes[randomIndex];
        cout << "Your New Year's Thechique is......: " << selectedWish << endl;
        cout << endl;
        menu();

        return 0;
    }

    void menu()
    {
        cout << "---------------------------------------------" << endl;
        cout << "1. Wishes for the year" << endl;
        cout << "2. Countdown for next New Year!" << endl;
        cout << "3. Whats your fate according to your zodiac sign " << endl;
        cout << "4. What technique are you on today's New Year's table?" << endl;
        cout << "5. Exit" << endl;
        cout << "---------------------------------------------" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {case 1:
            wishes();
            break;
        case 2: 
            countdown();
            break;
        case 3: 
            wishesF();
            break;
        case 4: 
            wishesTH();
            break;
        case 5:
            exit();
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
int main()
{
    menu();
    return 0;
}