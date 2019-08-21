/* 
 * Copyright 2019 Blake Garner
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "systemState.h"

SystemState::SystemState() {
    _isConnected = false;
    _isFineModeActive = false;
}

bool SystemState::isConnected() {
    return _isConnected;
}

void SystemState::setIsConnected(bool isConnected) {
    if(_isConnected != isConnected) {
        _isConnected = isConnected;
    }
}

bool SystemState::isFineModeActive() {
    return _isFineModeActive;
}

void SystemState::setIsFineModeActive(bool isFineModeActive) {
    if(_isFineModeActive != isFineModeActive) {
        _isFineModeActive = isFineModeActive;
    }
}