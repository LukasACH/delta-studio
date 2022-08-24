#include "../include/yds_shader_program.h"

ysShaderProgram::ysShaderProgram() : ysContextObject("SHADER_PROGRAM", DeviceAPI::Unknown) {
    for (auto &shaderSlot : m_shaderSlots) {
        shaderSlot = nullptr;
    }
    m_isLinked = false;
}

ysShaderProgram::ysShaderProgram(DeviceAPI API) : ysContextObject("SHADER_PROGRAM", API) {
    for (auto &shaderSlot : m_shaderSlots) {
        shaderSlot = nullptr;
    }
    m_isLinked = false;
}

ysShaderProgram::~ysShaderProgram() {
    /* void */
}
