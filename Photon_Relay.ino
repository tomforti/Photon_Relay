// A Spark function to parse the commands
int relay1(String command);
int relay2(String command);
int relay3(String command);
int relay4(String command);
int relay5(String command);
int relay6(String command);
int relay7(String command);
int relay8(String command);

// We name pins 
int r1 = D0; 
int r2 = D1;
int r3 = D2;
int r4 = D3;
int r5 = D4;
int r6 = D5;
int r7 = D6;
int r8 = D7;



// This routine runs only once upon reset
void setup() 
{
  //Register Spark functions
  Spark.function("strelay1", relay1);  
  Spark.function("strelay2", relay2);
  Spark.function("strelay3", relay3);
  Spark.function("strelay4", relay4);
  Spark.function("strelay5", relay5);
  Spark.function("strelay6", relay6);
  Spark.function("strelay7", relay7);
  Spark.function("strelay8", relay8);
  
  // Initialize output pins
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(r7, OUTPUT);
  pinMode(r8, OUTPUT);
  
  // take control of the LED
  RGB.control(true);
  
  // the following sets the RGB LED to light green:
  RGB.color(0, 5, 0);
}



// This routine loops forever 
void loop()
{
  // nothing here
}



//acts based on messages from spark cloud
int relay1(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r1, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r1, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay2(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r2, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r2, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay3(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r3, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r3, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay4(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r4, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r4, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay5(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r5, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r5, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay6(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r6, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r6, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay7(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r7, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r7, LOW);    // Turn OFF the relay
    return 0;
    }
}

int relay8(String command)
{
  if (command == "1") 
    {   
    digitalWrite(r8, HIGH);   // Turn ON the relay
    return 1;
    } 
  else 
    {               
    digitalWrite(r8, LOW);    // Turn OFF the relay
    return 0;
    }
}
