#ifndef __BTHOME_H__
#define __BTHOME_H__

#define BTHOME_SENSOR_BATTERY               0x01
#define BTHOME_SENSOR_BATTERY_FACTOR        1

#define BTHOME_SENSOR_TEMPERATURE           0x02
#define BTHOME_SENSOR_TEMPERATURE_FACTOR    0.01

#define BTHOME_SENSOR_HUMIDITY              0x03
#define BTHOME_SENSOR_HUMIDITY_FACTOR       0.01

#define BTHOME_SENSOR_HUMIDITY_SHORT        0x2E
#define BTHOME_SENSOR_HUMIDITY_SHORT_FACTOR 1

#define BTHOME_SENSOR_PRESSURE              0x04
#define BTHOME_SENSOR_PRESSURE_FACTOR       0.01

#define BTHOME_SENSOR_ILLUMINANCE           0x05
#define BTHOME_SENSOR_ILLUMINANCE_FACTOR    0.01

#define BTHOME_SENSOR_MASS_KG               0x06
#define BTHOME_SENSOR_MASS_KG_FACTOR        0.01

#define BTHOME_SENSOR_MASS_LB               0x07
#define BTHOME_SENSOR_MASS_LB_FACTOR        0.01

#define BTHOME_SENSOR_DEWPOINT              0x08
#define BTHOME_SENSOR_DEWPOINT_FACTOR       0.01

#define BTHOME_SENSOR_COUNT                 0x09
#define BTHOME_SENSOR_COUNT_FACTOR          1

#define BTHOME_SENSOR_ENERGY                0X0A
#define BTHOME_SENSOR_ENERGY_FACTOR         0.001

#define BTHOME_SENSOR_POWER                 0x0B
#define BTHOME_SENSOR_POWER_FACTOR          0.01

#define BTHOME_SENSOR_VOLTAGE               0x0C
#define BTHOME_SENSOR_VOLTAGE_FACTOR        0.001

#define BTHOME_SENSOR_PM25                  0x0D
#define BTHOME_SENSOR_PM25_FACTOR           1

#define BTHOME_SENSOR_PM10                  0x0E
#define BTHOME_SENSOR_PM10_FACTOR           1

#define BTHOME_SENSOR_CO2                   0x12
#define BTHOME_SENSOR_CO2_FACTOR            1

#define BTHOME_SENSOR_TVOC                  0x13
#define BTHOME_SENSOR_TVOC_FACTOR           1

#define BTHOME_SENSOR_MOISTURE              0x14
#define BTHOME_SENSOR_MOISTURE_FACTOR       0.01

#define BTHOME_SENSOR_MOISTURE_SHORT        0x2F
#define BTHOME_SENSOR_MOISTURE_SHORT_FACTOR 1


#define BTHOME_DATA_TYPE_UINT   0
#define BTHOME_DATA_TYPE_INT    1
#define BTHOME_DATA_TYPE_FLOAT  2
#define BTHOME_DATA_TYPE_STRING 3
#define BTHOME_DATA_TYPE_MAC    4


#define MAKE_INFO_BYTE(data, format) (sizeof(data)<<3 && format)


#endif
