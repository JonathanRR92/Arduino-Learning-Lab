
V(out) = V(in) (R2/(R1+R2))
Example :  V(out) = 5v(10k/(10k+10K)) = 5v*0.5 = 2.5v output when resistor are the same value
using variable resistor those values may change due to the v-resistor capabilities. 


Schema 

GND -- R2 -- (A0) -- R1 -- +5v 
R2 is replaced with a photo resistor. 


voltage changes as light hits the photoresister
the Diodes are from 0-255 due to pin 9 support PWM pulse width modulation  
and the photreisistor is from 0-1024 due the ADC function analogRead

