#pragma once

#include <Arduino.h>
#include "MQTTClient.h"
#include <WebSocketsClient.h>
#include <deque>

class MQTTWebSocketsClient: public WebSocketsClient {
	private:
		std::deque<uint8_t> buffer;
};