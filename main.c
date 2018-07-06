/*you will need a invoker, i just defined them in here*/
#define 0xFA92E226										PLAYER_PED_ID
#define 0x1647F1CB 										GET_ENTITY_COORDS
#define 0xD7E26B2C 										GET_CLOSEST_VEHICLE
#define 0x3AC90869										DOES_ENTITY_EXIST
#define 0x5D1F9E0F										SET_ENTITY_AS_MISSION_ENTITY
#define 0x9803AF60										DELETE_VEHICLE

int arraysize_vehicles = 596; //amount of vehicles you want to delete
char* hashlist[596] = { "adder", "t20", ... };

void fps_protection() //aka vehicle protection
{
	entity self = player_ped_id();
	vector3 coords = get_entity_coords(self, 0);

	for(int i = 0; i < arraysize_vehicles, i++) {
		entity closest_veh = get_closest_vehicle(coords.x, coords.y, coords.z, 25.0f, get_hash_key(hashlist[i]), 0) 
	}

	if(does_entity_exist(closest_veh)) {
		//sets entity to mission, not needed I think
		entity target = set_entity_as_mission_entity(closest_veh, 0, 1);
		delete_vehicle(&target);
	}
}


/*
i hope this will help you all out, it's working for me
a way to prevent fps-drops on the ps3/xb360/pc
used: PPC IDA (eboot.bin 1.27), brain

by david1337hax (twitter.com/david1337hax)


*/
