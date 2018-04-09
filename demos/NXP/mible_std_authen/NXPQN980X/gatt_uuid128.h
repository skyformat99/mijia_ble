/* 
* Declare all custom 128-bit UUIDs here using the format:
*
*  UUID128(name, bytes)
*
* where: 
*	-name : an unique tag for the newly defined UUID;
		will be used to reference this UUID when defining
		services and characteristics in <<gattDb.h>>
*	-bytes: 16 bytes representing the 128-bit value
*
* One definition per line. No semicolon required after each definition.
*
* example:
*  UUID128(uuid_service_robot_characteristics, 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF, 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF)
*  UUID128(uuid_char_robot_direction, 0x12, 0x34, 0x50, 0x00, 0x90, 0xAB, 0xCD, 0xEF, 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF)
*	
*/

UUID128(uuid_qpps_characteristics_rx, 0x00, 0x96, 0x12, 0x16, 0x54, 0x92, 0x75, 0xB5, 0xA2, 0x45, 0xFD, 0xAB, 0x39, 0xC4, 0x4B, 0xD4)
UUID128(uuid_qpps_characteristics_tx, 0x01, 0x96, 0x12, 0x16, 0x54, 0x92, 0x75, 0xB5, 0xA2, 0x45, 0xFD, 0xAB, 0x39, 0xC4, 0x4B, 0xD4)
UUID128(uuid_service_qpps,            0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0xE9, 0xFE, 0x00, 0x00)
UUID128(uuid_qpps_characteristics_period_tx, 0x02, 0x96, 0x12, 0x16, 0x54, 0x92, 0x75, 0xB5, 0xA2, 0x45, 0xFD, 0xAB, 0x39, 0xC4, 0x4B, 0xD4)