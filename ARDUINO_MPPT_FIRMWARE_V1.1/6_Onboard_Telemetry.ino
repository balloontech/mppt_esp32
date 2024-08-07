void Onboard_Telemetry(){    

  /////////////////////// USB SERIAL DATA TELEMETRY ////////////////////////   
  // 0 - Disable Serial
  // 1 - Display All
  // 2 - Display Essential Data
  // 3 - Display Numbers Only 

  currentSerialMillis = millis();
  if(currentSerialMillis-prevSerialMillis>=millisSerialInterval){   //Run routine every millisRoutineInterval (ms)
    prevSerialMillis = currentSerialMillis;                         //Store previous time

    if(serialTelemMode==0){}
//  else if(chargingPause==1){Serial.println("CHARGING PAUSED");}   // Charging paused message
    else if(serialTelemMode==1){ 
      Serial.print(" T:");     Serial.print(secondsElapsed);                                    // 1 - Display All                           
      Serial.print(" ERR:");   Serial.print(ERR);
      Serial.print(" FLV:");   Serial.print(FLV);  
      Serial.print(" BNC:");   Serial.print(BNC);  
      Serial.print(" IUV:");   Serial.print(IUV); 
      Serial.print(" IOC:");   Serial.print(IOC); 
      Serial.print(" OOV:");   Serial.print(OOV); 
      Serial.print(" OOC:");   Serial.print(OOC);
      Serial.print(" OTE:");   Serial.print(OTE); 
      Serial.print(" REC:");   Serial.print(REC);
      Serial.print(" MPPTA:"); Serial.print(MPPT_Mode);     
      Serial.print(" CM:");    Serial.print(output_Mode);   //Charging Mode
      
      Serial.print(" "); 
      Serial.print(" BYP:");   Serial.print(bypassEnable);
      Serial.print(" EN:");    Serial.print(buckEnable);
      Serial.print(" FAN:");   Serial.print(fanStatus);    
      Serial.print(" WiFi:");  Serial.print(WIFI);      
      Serial.print(" ");  
      Serial.print(" PI:");    Serial.print(powerInput,0); 
      Serial.print(" PWM:");   Serial.print(PWM); 
      Serial.print(" PPWM:");  Serial.print(PPWM); 
      Serial.print(" VI:");    Serial.print(voltageInput,1); 
      Serial.print(" VO:");    Serial.print(voltageOutput,1); 
      Serial.print(" CI:");    Serial.print(currentInput,2); 
      Serial.print(" CO:");    Serial.print(currentOutput,2); 
      Serial.print(" Wh:");    Serial.print(Wh,2); 
      Serial.print(" Temp:");  Serial.print(temperature,1);  
      Serial.print(" "); 
      Serial.print(" CSMPV:"); Serial.print(currentMidPoint,3);  
      Serial.print(" CSV:");   Serial.print(CSI_converted,3);   
      Serial.print(" VO%Dev:");Serial.print(outputDeviation,1);   
      Serial.print(" SOC:");   Serial.print(batteryPercent);Serial.print("%"); 
      Serial.print(" LoopT:"); Serial.print(loopTime,3);Serial.print("ms");  
      Serial.println("");    

      Serial2.print(" T:");     Serial2.print(secondsElapsed);                                    // 1 - Display All                           
      Serial2.print(" ERR:");   Serial2.print(ERR);
      Serial2.print(" FLV:");   Serial2.print(FLV);  
      Serial2.print(" BNC:");   Serial2.print(BNC);  
      Serial2.print(" IUV:");   Serial2.print(IUV); 
      Serial2.print(" IOC:");   Serial2.print(IOC); 
      Serial2.print(" OOV:");   Serial2.print(OOV); 
      Serial2.print(" OOC:");   Serial2.print(OOC);
      Serial2.print(" OTE:");   Serial2.print(OTE); 
      Serial2.print(" REC:");   Serial2.print(REC);
      Serial2.print(" MPPTA:"); Serial2.print(MPPT_Mode);     
      Serial2.print(" CM:");    Serial2.print(output_Mode);   //Charging Mode
      
      Serial2.print(" "); 
      Serial2.print(" BYP:");   Serial2.print(bypassEnable);
      Serial2.print(" EN:");    Serial2.print(buckEnable);
      Serial2.print(" FAN:");   Serial2.print(fanStatus);    
      Serial2.print(" WiFi:");  Serial2.print(WIFI);      
      Serial2.print(" ");  
      Serial2.print(" PI:");    Serial2.print(powerInput,0); 
      Serial2.print(" PWM:");   Serial2.print(PWM); 
      Serial2.print(" PPWM:");  Serial2.print(PPWM); 
      Serial2.print(" VI:");    Serial2.print(voltageInput,1); 
      Serial2.print(" VO:");    Serial2.print(voltageOutput,1); 
      Serial2.print(" CI:");    Serial2.print(currentInput,2); 
      Serial2.print(" CO:");    Serial2.print(currentOutput,2); 
      Serial2.print(" Wh:");    Serial2.print(Wh,2); 
      Serial2.print(" Temp:");  Serial2.print(temperature,1);  
      Serial2.print(" "); 
      Serial2.print(" CSMPV:"); Serial2.print(currentMidPoint,3);  
      Serial2.print(" CSV:");   Serial2.print(CSI_converted,3);   
      Serial2.print(" VO%Dev:");Serial2.print(outputDeviation,1);   
      Serial2.print(" SOC:");   Serial2.print(batteryPercent);Serial2.print("%"); 
      Serial2.print(" LoopT:"); Serial2.print(loopTime,3);Serial2.print("ms");  
      Serial2.println("");  
    }
    else if(serialTelemMode==2){ // 2 - Display Essential Data
      Serial.print(" PI:");    Serial.print(powerInput,0); 
      Serial.print(" PWM:");   Serial.print(PWM); 
      Serial.print(" PPWM:");  Serial.print(PPWM); 
      Serial.print(" VI:");    Serial.print(voltageInput,1); 
      Serial.print(" VO:");    Serial.print(voltageOutput,1); 
      Serial.print(" CI:");    Serial.print(currentInput,2); 
      Serial.print(" CO:");    Serial.print(currentOutput,2); 
      Serial.print(" Wh:");    Serial.print(Wh,2); 
      Serial.print(" Temp:");  Serial.print(temperature,1);  
      Serial.print(" EN:");    Serial.print(buckEnable);
      Serial.print(" FAN:");   Serial.print(fanStatus);   
      Serial.print(" SOC:");   Serial.print(batteryPercent);Serial.print("%"); 
      Serial.print(" T:");     Serial.print(secondsElapsed); 
      Serial.print(" LoopT:"); Serial.print(loopTime,3);Serial.print("ms");  
      Serial.println("");    
    }  
    else if(serialTelemMode==3){ // 3 - Display Numbers Only 
      Serial.print(" ");       Serial.print(powerInput,0); 
      Serial.print(" ");       Serial.print(voltageInput,1); 
      Serial.print(" ");       Serial.print(voltageOutput,1); 
      Serial.print(" ");       Serial.print(currentInput,2); 
      Serial.print(" ");       Serial.print(currentOutput,2);   
      Serial.print(" ");       Serial.print(Wh,2); 
      Serial.print(" ");       Serial.print(temperature,1);  
      Serial.print(" ");       Serial.print(buckEnable);
      Serial.print(" ");       Serial.print(fanStatus);   
      Serial.print(" ");       Serial.print(batteryPercent);
      Serial.print(" ");       Serial.print(secondsElapsed); 
      Serial.print(" ");       Serial.print(loopTime,3);
      Serial.print(" ");       Serial.println("");    
    }  

  } 
}
