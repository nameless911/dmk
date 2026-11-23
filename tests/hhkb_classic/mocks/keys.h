#define K_SPC 44
#define MO(x) (0x10000000U | (x))
#define MOD_LALT (1 << 2)
#define LM(layer, mods) (0x40000000U | ((uint32_t)(mods) << 8) | (layer))
