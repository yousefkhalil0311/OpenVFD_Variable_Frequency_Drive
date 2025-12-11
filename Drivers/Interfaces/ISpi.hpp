/*
 * ISpi.hpp
 *
 *  Created on: Dec 11, 2025
 *      Author: Yousef Khalil
 */

#ifndef INTERFACES_ISPI_HPP_
#define INTERFACES_ISPI_HPP_

#include <stdint.h>


class ISpi {

public:

	virtual HAL_StatusTypeDef transmit(uint8_t* data, uint16_t size, uint32_t timeout) = 0;
	virtual HAL_StatusTypeDef receive(uint8_t* data, uint16_t size, uint32_t timeout) = 0;
	virtual ~ISpi() = default;

};


#endif /* INTERFACES_ISPI_HPP_ */
