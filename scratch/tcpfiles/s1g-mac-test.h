#pragma once

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/applications-module.h"
#include "ns3/wifi-module.h"
#include "ns3/mobility-module.h"
#include "ns3/ipv4-global-routing-helper.h"
#include "ns3/internet-module.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <sys/stat.h>
#include "ns3/rps.h"
#include <utility> // std::pair
#include <map>

#include "Configuration.h"
#include "NodeEntry.h"
#include "SimpleTCPClient.h"
#include "Statistics.h"
#include "SimulationEventManager.h"

#include "TCPPingPongClient.h"
#include "TCPPingPongServer.h"
#include "TCPIPCameraClient.h"
#include "TCPIPCameraServer.h"
#include "TCPFirmwareClient.h"
#include "TCPFirmwareServer.h"
#include "TCPSensorClient.h"
#include "TCPSensorServer.h"

using namespace std;
using namespace ns3;

NodeContainer wifiStaNode;
Ipv4InterfaceContainer staNodeInterface;
Ipv6InterfaceContainer staNodeInterface6;

NetDeviceContainer apDevice;

uint16_t currentRps;
uint16_t currentRawGroup;
uint16_t currentRawSlot;

vector<NodeEntry*> nodes;

vector<long> transmissionsPerTIMGroupAndSlotFromAPSinceLastInterval;
vector<long> transmissionsPerTIMGroupAndSlotFromSTASinceLastInterval;
