# Photon_Relay
Allows Smartthings to control a Particle Photon (spark core) as a 8 relay switch

To set up 
1. Put the INO code on your Photon
2. Put the Groovy code as a device type on smartthings
3. Add a new deivce and use the newly made device type
4. In preferences of the new device add you photons token and device ID
5. In preferences tell smartthings which relay it will control for 1-8. Realy 1 = Pin D0, Relay 8 = Pin D7 (Has Blue LED good for testing)
