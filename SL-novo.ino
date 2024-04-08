

void SegueLinha() {

    if(sensor[2]==1 && sensor[3]==0 && sensor[4]==1){ //LINHA RETA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.85));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.85));
  }
  
    else if(sensor[2]==1 && sensor[3]==0 && sensor[4]==0){ //CURVA LEVE Ã€ DIREITA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.5));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.8));
  }
  
   else if(sensor[0]==1 && sensor[1]==1 && sensor[2]==0 && sensor[3]==0 && sensor[4]==1 && sensor[5]==1 && sensor[6]==1){  //CURVA LEVE Ã€ ESQUERDA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.8));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.5));
  }

    else if(sensor[0]==1 && sensor[1]==1 && sensor[2]==1 && sensor[3]==1 && sensor[4]==0 && sensor[5]==1 && sensor[6]==1){ //CURVA ACENTUADA Ã€ DIREITA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.2));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.8));
  }
  
    else if(sensor[0]==1 && sensor[1]==1 && sensor[2]==0 && sensor[3]==1 && sensor[4]==1 && sensor[5]==1 && sensor[6]==1){ //CURVA ACENTUADA Ã€ ESQUERDA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.8));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.2));
  }

  else if(sensor[0]==1 && sensor[1]==1 && sensor[2]==1 && sensor[3]==1 && sensor[4]==1 && sensor[5]==0 && sensor[6]==1){ //CURVA + ACENTUADA Ã€ DIREITA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.1));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.8));
  }
  else if(sensor[0]==1 && sensor[1]==0 && sensor[2]==1 && sensor[3]==1 && sensor[4]==1 && sensor[5]==1 && sensor[6]==1){ //CURVA + ACENTUADA Ã€ ESQUERDA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(PWM_A, vel_A*(0.8));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(PWM_B, vel_B*(0.1));
  }

  else if(sensor[0]==1 && sensor[1]==1 && sensor[2]==1 && sensor[3]==1 && sensor[4]==1 && sensor[5]==1 && sensor[6]==1){ //PARADA
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
    analogWrite(PWM_A, vel_A*(0));
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
    analogWrite(PWM_B, vel_B*(0));
  }
    
  
  
  

}
