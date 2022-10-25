#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Character[]
struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// AudioSetting
struct AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeScene
struct ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05;
// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61;
// Characterdatabase
struct Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF;
// CharaterManger
struct CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Daydown
struct Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Destroy
struct Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Exit
struct Exit_t004FBB16F8F40CC113E50B8559F8E1CDAADE0B7E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InputDay
struct InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// JSONSaving
struct JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82;
// LoadSavePetDataNextScenes
struct LoadSavePetDataNextScenes_t82469BBE999B6C27031712451EB5C6FF99F63A7D;
// LoadScenes
struct LoadScenes_t0B917D855B0E200276F8539038904319D086D44E;
// Manager
struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// ONOFF
struct ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PetData
struct PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C;
// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Scroller
struct Scroller_tE9ACC7A8D6D9C55273974DCDA16ACCCDB8D6F206;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StatusHunger
struct StatusHunger_t4B002C7D731B280C34A2495A4AFB36862AF2675D;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// LoadScenes/<LoadScene_Coroutine>d__3
struct U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70;
IL2CPP_EXTERN_C String_t* _stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE;
IL2CPP_EXTERN_C String_t* _stringLiteral41ADB88A61089C494B0244872EF04739043644AE;
IL2CPP_EXTERN_C String_t* _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral5008F88A89E42251C54B63E71AF62B4FA3FF8CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral5B1A8DF2B3C565A2C46394B9EE3CC87C13A16010;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2724C0488072E0CFB2B9D7854626B322933AD5;
IL2CPP_EXTERN_C String_t* _stringLiteral628F77E24A388599A60064419D86A89CF1833299;
IL2CPP_EXTERN_C String_t* _stringLiteral667A6D03D3F25FF1CD074CEE58A5C8EC5CBD08AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6C6E36B910614E9E0913A71619BB791C2A48B12C;
IL2CPP_EXTERN_C String_t* _stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D;
IL2CPP_EXTERN_C String_t* _stringLiteral759224471F830122DE360CA6EACBBADC7B33B6C6;
IL2CPP_EXTERN_C String_t* _stringLiteral77C435909975B85C089BB39F3212D644DD87C7F0;
IL2CPP_EXTERN_C String_t* _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1;
IL2CPP_EXTERN_C String_t* _stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D;
IL2CPP_EXTERN_C String_t* _stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD;
IL2CPP_EXTERN_C String_t* _stringLiteral965515748584892FF4AD0ABEDACA8E09902E1B28;
IL2CPP_EXTERN_C String_t* _stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2;
IL2CPP_EXTERN_C String_t* _stringLiteralB160FF34A760944CC7793F560E7023DF6023090B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5;
IL2CPP_EXTERN_C String_t* _stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF171540EAA45F76228FDAF5C957DDA8DCB61355;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE3217CB7B28C01131D24B3B8C2E6F2E25843CCE7;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_AddMoney_mFD710C8EB2582C2A396B0AC40EEBD648D48AC156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_DayPlsu_mFE71B37FF35F846147DB52364A2FC7C3D52EB3EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_FoodStatus_m185A2AC74A7BDDFF8CCF3B003A71BA56752A4917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_HappyStatus_m902B2ACE5972905C45FCC70E5A9D7EC56C6F5829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_HealthyStatus_mD052319713150766DF9BCEED7358966782F886A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_NextScenMiniGame_mD84B2F5F01FF47C014161EC95B01025D82A6EB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_NextScen_m7E4F2F5501D512726A4B080550C40E6C611FDB26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadScene_CoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mEB35AD9E1C1FF075A50413E5F25B4FCDA5A2A6F9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61  : public RuntimeObject
{
	// System.String Character::characterName
	String_t* ___characterName_0;
	// UnityEngine.Sprite Character::characterSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___characterSprite_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// PetData
struct PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C  : public RuntimeObject
{
	// System.String PetData::petName
	String_t* ___petName_0;
	// System.Single PetData::food
	float ___food_1;
	// System.Single PetData::happy
	float ___happy_2;
	// System.Single PetData::energy
	float ___energy_3;
	// System.Single PetData::healthy
	float ___healthy_4;
	// System.Int32 PetData::days
	int32_t ___days_5;
	// System.Single PetData::money
	float ___money_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LoadScenes/<LoadScene_Coroutine>d__3
struct U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5  : public RuntimeObject
{
	// System.Int32 LoadScenes/<LoadScene_Coroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadScenes/<LoadScene_Coroutine>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LoadScenes LoadScenes/<LoadScene_Coroutine>d__3::<>4__this
	LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* ___U3CU3E4__this_2;
	// System.Int32 LoadScenes/<LoadScene_Coroutine>d__3::index
	int32_t ___index_3;
	// UnityEngine.AsyncOperation LoadScenes/<LoadScene_Coroutine>d__3::<asyncOperation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CasyncOperationU3E5__2_4;
	// System.Single LoadScenes/<LoadScene_Coroutine>d__3::<progress>5__3
	float ___U3CprogressU3E5__3_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Characterdatabase
struct Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Character[] Characterdatabase::character
	CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* ___character_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AudioManager::firstPlayInt
	int32_t ___firstPlayInt_7;
	// UnityEngine.UI.Slider AudioManager::backgroundSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___backgroundSlider_8;
	// UnityEngine.UI.Slider AudioManager::soundEffectSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___soundEffectSlider_9;
	// System.Single AudioManager::backgroundFloat
	float ___backgroundFloat_10;
	// System.Single AudioManager::soundEffectFloat
	float ___soundEffectFloat_11;
	// UnityEngine.AudioSource AudioManager::backgroundAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backgroundAudio_12;
	// UnityEngine.AudioSource[] AudioManager::soundEffectAudio
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___soundEffectAudio_13;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// System.String AudioManager::FirstPlay
	String_t* ___FirstPlay_4;
	// System.String AudioManager::BackgroundPref
	String_t* ___BackgroundPref_5;
	// System.String AudioManager::SoundEffectPref
	String_t* ___SoundEffectPref_6;
};

// AudioSetting
struct AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AudioSetting::backgroundFloat
	float ___backgroundFloat_6;
	// System.Single AudioSetting::soundEffectFloat
	float ___soundEffectFloat_7;
	// UnityEngine.AudioSource AudioSetting::backgroundAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backgroundAudio_8;
	// UnityEngine.AudioSource[] AudioSetting::soundEffectAudio
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___soundEffectAudio_9;
};

struct AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields
{
	// System.String AudioSetting::BackgroundPref
	String_t* ___BackgroundPref_4;
	// System.String AudioSetting::SoundEffectPref
	String_t* ___SoundEffectPref_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ChangeScene
struct ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CharaterManger
struct CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Characterdatabase CharaterManger::characterDB
	Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* ___characterDB_4;
	// UnityEngine.UI.Text CharaterManger::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_5;
	// UnityEngine.SpriteRenderer CharaterManger::artworkSprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___artworkSprite_6;
	// System.Int32 CharaterManger::selectedOption
	int32_t ___selectedOption_7;
};

// Daydown
struct Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Daydown::DayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DayText_5;
	// UnityEngine.UI.Text Daydown::FoodText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___FoodText_6;
	// UnityEngine.UI.Text Daydown::EnergyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EnergyText_7;
	// UnityEngine.UI.Text Daydown::HappingessText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HappingessText_8;
	// UnityEngine.GameObject Daydown::fullFool
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fullFool_9;
	// UnityEngine.GameObject Daydown::fullEnergy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fullEnergy_10;
	// UnityEngine.GameObject Daydown::fullHappy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fullHappy_11;
	// System.Int32 Daydown::hunger
	int32_t ___hunger_12;
	// System.Int32 Daydown::happingess
	int32_t ___happingess_13;
	// System.Int32 Daydown::energy
	int32_t ___energy_14;
	// System.Int32 Daydown::hungerTickRate
	int32_t ___hungerTickRate_15;
	// System.Int32 Daydown::happTickRate
	int32_t ___happTickRate_16;
	// System.Int32 Daydown::energyTickRate
	int32_t ___energyTickRate_17;
	// System.Int32 Daydown::day
	int32_t ___day_18;
};

struct Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields
{
	// Daydown Daydown::instance
	Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* ___instance_4;
};

// Destroy
struct Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Exit
struct Exit_t004FBB16F8F40CC113E50B8559F8E1CDAADE0B7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// InputDay
struct InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// JSONSaving
struct JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PetData JSONSaving::petData
	PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* ___petData_4;
	// System.String JSONSaving::path
	String_t* ___path_5;
	// System.String JSONSaving::persistenPath
	String_t* ___persistenPath_6;
	// UnityEngine.UI.Button JSONSaving::SaveButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SaveButton_7;
	// UnityEngine.UI.Button JSONSaving::DayButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___DayButton_8;
	// UnityEngine.UI.Button JSONSaving::NextScene
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___NextScene_9;
	// UnityEngine.UI.Button JSONSaving::NextSceneMiniGame
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___NextSceneMiniGame_10;
	// UnityEngine.UI.Button JSONSaving::BeforceScene
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BeforceScene_11;
	// UnityEngine.UI.Button JSONSaving::FoodButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___FoodButton_12;
	// UnityEngine.UI.Button JSONSaving::HappyButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___HappyButton_13;
	// UnityEngine.UI.Button JSONSaving::HealthyButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___HealthyButton_14;
	// UnityEngine.UI.Button JSONSaving::MoneyButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___MoneyButton_15;
	// UnityEngine.GameObject JSONSaving::FullFood
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullFood_16;
	// UnityEngine.GameObject JSONSaving::FullHappy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullHappy_17;
	// UnityEngine.GameObject JSONSaving::Day_bt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Day_bt_18;
	// UnityEngine.UI.Text JSONSaving::DayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DayText_19;
	// UnityEngine.UI.Text JSONSaving::FoodText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___FoodText_20;
	// UnityEngine.UI.Text JSONSaving::EngeryText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EngeryText_21;
	// UnityEngine.UI.Text JSONSaving::HappyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HappyText_22;
	// UnityEngine.UI.Text JSONSaving::HealthyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HealthyText_23;
	// UnityEngine.UI.Text JSONSaving::MoneyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MoneyText_24;
	// UnityEngine.UI.Image JSONSaving::FoodBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___FoodBar_25;
	// UnityEngine.UI.Image JSONSaving::HappyBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___HappyBar_26;
	// UnityEngine.UI.Image JSONSaving::HealthyBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___HealthyBar_27;
	// UnityEngine.UI.Image JSONSaving::EngeryBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___EngeryBar_28;
};

// LoadSavePetDataNextScenes
struct LoadSavePetDataNextScenes_t82469BBE999B6C27031712451EB5C6FF99F63A7D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PetData LoadSavePetDataNextScenes::petData
	PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* ___petData_4;
};

// LoadScenes
struct LoadScenes_t0B917D855B0E200276F8539038904319D086D44E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LoadScenes::loaderUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loaderUI_4;
	// UnityEngine.UI.Slider LoadScenes::progressSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___progressSlider_5;
};

// Manager
struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PetData Manager::petData
	PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* ___petData_4;
	// UnityEngine.UI.Text Manager::Score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Score_5;
	// UnityEngine.UI.Text Manager::MoneyMiniText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MoneyMiniText_6;
	// System.Int32 Manager::ScoreNum
	int32_t ___ScoreNum_7;
	// System.Single Manager::MoneyMini
	float ___MoneyMini_8;
	// System.Single Manager::RandomMoney
	float ___RandomMoney_9;
	// UnityEngine.GameObject[] Manager::Levels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Levels_10;
	// System.Int32 Manager::currentLevel
	int32_t ___currentLevel_11;
};

// ONOFF
struct ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ONOFF::Cat
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Cat_4;
	// UnityEngine.GameObject ONOFF::Dog
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Dog_5;
};

// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlayAudio::audioObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___audioObj_4;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Characterdatabase Player::characterDB
	Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* ___characterDB_4;
	// UnityEngine.SpriteRenderer Player::artworkSprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___artworkSprite_5;
	// System.Int32 Player::selectedOption
	int32_t ___selectedOption_6;
};

// Scroller
struct Scroller_tE9ACC7A8D6D9C55273974DCDA16ACCCDB8D6F206  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage Scroller::_img
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ____img_4;
	// System.Single Scroller::_x
	float ____x_5;
	// System.Single Scroller::_y
	float ____y_6;
};

// StatusHunger
struct StatusHunger_t4B002C7D731B280C34A2495A4AFB36862AF2675D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 StatusHunger::food
	int32_t ___food_4;
	// System.Int32 StatusHunger::happy
	int32_t ___happy_5;
	// System.Int32 StatusHunger::energys
	int32_t ___energys_6;
	// System.Int32 StatusHunger::day
	int32_t ___day_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Character[]
struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7  : public RuntimeArray
{
	ALIGN_FIELD (8) Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* m_Items[1];

	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJson_TisIl2CppFullySharedGenericAny_mCA9E8A2C7BF60F5C6F2FE4812F33F4C06E5B44D0_gshared (String_t* ___json0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void AudioManager::SaveSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SaveSound_m3466D7EC2AC0AE4425A2AF9A5F171A27FF9E1A27 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void AudioSetting::ContinueSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSetting_ContinueSetting_m9501A14DBB7F5DF81FE2E2D282F9D9F43BBB59CD (AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void CharaterManger::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_Load_m1EB04611FDE3C2018F95E2503E101B1F388ECF0E (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) ;
// System.Void CharaterManger::UpdateCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_UpdateCharacter_mC48D25EBC841C37082BB08CEBB310ED0815365B4 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, int32_t ___selectedOption0, const RuntimeMethod* method) ;
// System.Int32 Characterdatabase::get_CharacterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Characterdatabase_get_CharacterCount_m8C0FFB457E953A1AAC9CCCBD535AAB46F64B26DE (Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* __this, const RuntimeMethod* method) ;
// System.Void CharaterManger::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_Save_m83F1C6870188BC081920356012B02CFA10AD7984 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) ;
// Character Characterdatabase::GetCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* Characterdatabase_GetCharacter_mA37CF4251C87F269028D8391DD741E485DB9E713 (Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LoadScenes::LoadScene_Coroutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadScenes_LoadScene_Coroutine_m35FAB839F2DF54E1C4B042D93C1455DBF31C1C3F (LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void LoadScenes/<LoadScene_Coroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScene_CoroutineU3Ed__3__ctor_m9DA4715119E712A489A3496699E13C0914A90363 (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void PetData::LoadPetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_LoadPetData_m1A666E17C15DF7853C034DD4C183D4D2CB81AFC1 (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) ;
// System.Void Manager::MoneyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_MoneyUpdate_m51554C3EFFCEFC1285AAEC9B18E887FD982A9F18 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void PetData::SavePetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6 (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) ;
// System.Void PetData::.ctor(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData__ctor_mC264AA9E21D11A47CE7A98F20326C5D78816E72A (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, String_t* ___petName0, float ___food1, float ___happy2, float ___energy3, float ___healthy4, int32_t ___days5, float ___money6, const RuntimeMethod* method) ;
// System.Void Daydown::LoadHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadHappy_m685D78410EE88E5F16BA2E61389AAEAAEFA06E0D (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::LoadHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadHunger_m49D72E3B2B5380BF3840D6336A2637AFCAD33AB0 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::LoadEnergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadEnergy_mEA5AFF061DD94263D2B49F707ED4BD698F2DBC71 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::LoadDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadDay_m81805884B84B0E5806FC784899D4A88015F506D0 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::SaveDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveDay_mB1879EB1EECED2BD13195A72DE5E282F43C3837E (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Daydown::SaveHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveHunger_m307E6EDE48AC066397AFD2A03E7F14AD113E7007 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::SaveEnergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveEnergy_m45EDE136ADA5264B5C2E4884ED1DE8875618DFEE (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::SaveHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveHappy_m61C9D6C880A7BAB3909297AD4B930D5E346D3FEA (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::AddDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddDay_m1BC5714C196A472D7898B916325BEA43EA021795 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::AddFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddFood_m978623E2DBD3ECAC3E42D3D1784B9E387B22AD44 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::AddEnergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddEnergy_m56C01F93DCEFD4FBAF3AF620A6632A6594DFE462 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void Daydown::AddHappinger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddHappinger_m7D2A9D2E2F47306D7984CA2DA26F2CC0FBE2E48B (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::SetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_SetPath_mEC4A1571DD111B5F06D032ABD7D8769A02B80712 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::CreatePlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_CreatePlayerData_m35DEF87C7D25A4E15BC566E398BD024F3108DCF0 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::LoadPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_LoadPlayerData_m1DA19903053C2DA55FD18B7D445947C91CA4030F (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void JSONSaving::FoodBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_FoodBarUpdate_mF6D2A94B747D8027110C3B7DEE9DD1B2EF0F7F17 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::HappyBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_HappyBarUpdate_m9333C5729893BD497331F876B4868892BA602920 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::HealthyBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_HealthyBarUpdate_mC243FC62E03E60AA725E6EFC51B28611929D6E5E (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::EngeryBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_EngeryBarUpdate_mF886507CBEA031F38AAB0E01C5FF5EC1D4C30EF9 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.Void PetData::Re()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_Re_m3FEA5EB61FDEB37B72F7C231E42A07B6544ED2F0 (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) ;
// System.Void JSONSaving::DayPlsu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_DayPlsu_mFE71B37FF35F846147DB52364A2FC7C3D52EB3EF (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m7C83908E2616C22FA632EF67E36E137932E534D7 (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<PetData>(System.String)
inline PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20 (String_t* ___json0, const RuntimeMethod* method)
{
	PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonUtility_FromJson_TisIl2CppFullySharedGenericAny_mCA9E8A2C7BF60F5C6F2FE4812F33F4C06E5B44D0_gshared)(___json0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Player::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Load_m7378D7209D36BDF92654D3A95A8AEA2D94C8CAFB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::UpdateCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_UpdateCharacter_m7A06BE10B6210846520070ADFE9D201D2B7D18A5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___selectedOption0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_uvRect_m9DF6BBBC6AC46F7F3290A220ED6F076CAB4BC52F (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firstPlayInt = PlayerPrefs.GetInt(FirstPlay);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_0, NULL);
		__this->___firstPlayInt_7 = L_1;
		// if(firstPlayInt == 0)
		int32_t L_2 = __this->___firstPlayInt_7;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		// backgroundFloat = .25f;
		__this->___backgroundFloat_10 = (0.25f);
		// soundEffectFloat = .75f;
		__this->___soundEffectFloat_11 = (0.75f);
		// backgroundSlider.value = backgroundFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___backgroundSlider_8;
		float L_4 = __this->___backgroundFloat_10;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_4);
		// soundEffectSlider.value = soundEffectFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___soundEffectSlider_9;
		float L_6 = __this->___soundEffectFloat_11;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_6);
		// PlayerPrefs.SetFloat(BackgroundPref, backgroundFloat);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_7 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5;
		float L_8 = __this->___backgroundFloat_10;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_7, L_8, NULL);
		// PlayerPrefs.SetFloat(SoundEffectPref, soundEffectFloat);
		String_t* L_9 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectPref_6;
		float L_10 = __this->___soundEffectFloat_11;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_9, L_10, NULL);
		// PlayerPrefs.SetInt(FirstPlay, -1);
		String_t* L_11 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_11, (-1), NULL);
		return;
	}

IL_007c:
	{
		// backgroundFloat = PlayerPrefs.GetFloat(BackgroundPref);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_12 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5;
		float L_13;
		L_13 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(L_12, NULL);
		__this->___backgroundFloat_10 = L_13;
		// backgroundSlider.value = backgroundFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___backgroundSlider_8;
		float L_15 = __this->___backgroundFloat_10;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, L_15);
		// soundEffectFloat = PlayerPrefs.GetFloat(SoundEffectPref);
		String_t* L_16 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectPref_6;
		float L_17;
		L_17 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(L_16, NULL);
		__this->___soundEffectFloat_11 = L_17;
		// soundEffectSlider.value = soundEffectFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___soundEffectSlider_9;
		float L_19 = __this->___soundEffectFloat_11;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
		// }
		return;
	}
}
// System.Void AudioManager::SaveSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SaveSound_m3466D7EC2AC0AE4425A2AF9A5F171A27FF9E1A27 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat(BackgroundPref , backgroundSlider.value);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___backgroundSlider_8;
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_0, L_2, NULL);
		// PlayerPrefs.SetFloat(SoundEffectPref, soundEffectSlider.value);
		String_t* L_3 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectPref_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___soundEffectSlider_9;
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_OnApplicationFocus_mCF6362976976CAAC01AB785062A7CA7E996F63E9 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, bool ___inFocus0, const RuntimeMethod* method) 
{
	{
		// if(!inFocus)
		bool L_0 = ___inFocus0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// SaveSound();
		AudioManager_SaveSound_m3466D7EC2AC0AE4425A2AF9A5F171A27FF9E1A27(__this, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void AudioManager::UpdateSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_UpdateSound_m3D3C946FBC98B1589A4533CA82B50ACF7F24DD22 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// backgroundAudio.volume = backgroundSlider.value;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___backgroundAudio_12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___backgroundSlider_8;
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_2, NULL);
		// for(int i = 0; i < soundEffectAudio.Length; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		// soundEffectAudio[i].volume = soundEffectSlider.value;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3 = __this->___soundEffectAudio_13;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___soundEffectSlider_9;
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_7);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, L_8, NULL);
		// for(int i = 0; i < soundEffectAudio.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0036:
	{
		// for(int i = 0; i < soundEffectAudio.Length; i++)
		int32_t L_10 = V_0;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_11 = __this->___soundEffectAudio_13;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AudioManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__cctor_m0C0807E041C4A944EAD995F94CC08C398D44F393 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string FirstPlay = "FirstPlay";
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4 = _stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4), (void*)_stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9);
		// private static readonly string BackgroundPref = "BackgroundPref";
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5 = _stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5), (void*)_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		// private static readonly string SoundEffectPref = "SoundEffectPref";
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectPref_6 = _stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectPref_6), (void*)_stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioSetting::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSetting_Awake_m22B120287EBC133DC9392427F1472851530728D8 (AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A* __this, const RuntimeMethod* method) 
{
	{
		// ContinueSetting();
		AudioSetting_ContinueSetting_m9501A14DBB7F5DF81FE2E2D282F9D9F43BBB59CD(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioSetting::ContinueSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSetting_ContinueSetting_m9501A14DBB7F5DF81FE2E2D282F9D9F43BBB59CD (AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// backgroundFloat = PlayerPrefs.GetFloat(BackgroundPref);
		il2cpp_codegen_runtime_class_init_inline(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields*)il2cpp_codegen_static_fields_for(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var))->___BackgroundPref_4;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(L_0, NULL);
		__this->___backgroundFloat_6 = L_1;
		// soundEffectFloat = PlayerPrefs.GetFloat(SoundEffectPref);
		String_t* L_2 = ((AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields*)il2cpp_codegen_static_fields_for(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var))->___SoundEffectPref_5;
		float L_3;
		L_3 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(L_2, NULL);
		__this->___soundEffectFloat_7 = L_3;
		// backgroundAudio.volume = backgroundFloat;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___backgroundAudio_8;
		float L_5 = __this->___backgroundFloat_6;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, L_5, NULL);
		// for (int i = 0; i < soundEffectAudio.Length; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_0035:
	{
		// soundEffectAudio[i].volume = soundEffectFloat;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_6 = __this->___soundEffectAudio_9;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = __this->___soundEffectFloat_7;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, L_10, NULL);
		// for (int i = 0; i < soundEffectAudio.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		// for (int i = 0; i < soundEffectAudio.Length; i++)
		int32_t L_12 = V_0;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_13 = __this->___soundEffectAudio_9;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSetting__ctor_m6A72897C5839281FE16E1A4C2FE8DFE657FA87AD (AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AudioSetting::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSetting__cctor_m1C2A986949CB4EB0A643D04D0E8D700B8DCDF5C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string BackgroundPref = "BackgroundPref";
		((AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields*)il2cpp_codegen_static_fields_for(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var))->___BackgroundPref_4 = _stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields*)il2cpp_codegen_static_fields_for(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var))->___BackgroundPref_4), (void*)_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		// private static readonly string SoundEffectPref = "SoundEffectPref";
		((AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields*)il2cpp_codegen_static_fields_for(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var))->___SoundEffectPref_5 = _stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_StaticFields*)il2cpp_codegen_static_fields_for(AudioSetting_t285C6A519320B427F29DD88A4C9047248DB6FD5A_il2cpp_TypeInfo_var))->___SoundEffectPref_5), (void*)_stringLiteralB1EA229F4608086EE3D4E7839563C83EE720ABF4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_m9D8D6104D9CB19DAE6866ECA929FFB0F2592DD19 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Characterdatabase::get_CharacterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Characterdatabase_get_CharacterCount_m8C0FFB457E953A1AAC9CCCBD535AAB46F64B26DE (Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* __this, const RuntimeMethod* method) 
{
	{
		// return character.Length;
		CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* L_0 = __this->___character_4;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// Character Characterdatabase::GetCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* Characterdatabase_GetCharacter_mA37CF4251C87F269028D8391DD741E485DB9E713 (Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return character[index];
		CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* L_0 = __this->___character_4;
		int32_t L_1 = ___index0;
		int32_t L_2 = L_1;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Characterdatabase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Characterdatabase__ctor_m9FDC731C44619D5E020D8FE81A5DFF4FB66A2A75 (Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharaterManger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_Start_mB63D18FC54CBF7BCD3C4C637D944303408819285 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!PlayerPrefs.HasKey("selectedOption"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// selectedOption =0;
		__this->___selectedOption_7 = 0;
		goto IL_001b;
	}

IL_0015:
	{
		// Load();
		CharaterManger_Load_m1EB04611FDE3C2018F95E2503E101B1F388ECF0E(__this, NULL);
	}

IL_001b:
	{
		// UpdateCharacter(selectedOption);
		int32_t L_1 = __this->___selectedOption_7;
		CharaterManger_UpdateCharacter_mC48D25EBC841C37082BB08CEBB310ED0815365B4(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharaterManger::NextOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_NextOption_m87FD33E306E104DCB32B53C29158F2CE11B0E278 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) 
{
	{
		// selectedOption++;
		int32_t L_0 = __this->___selectedOption_7;
		__this->___selectedOption_7 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (selectedOption >= characterDB.CharacterCount)
		int32_t L_1 = __this->___selectedOption_7;
		Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* L_2 = __this->___characterDB_4;
		int32_t L_3;
		L_3 = Characterdatabase_get_CharacterCount_m8C0FFB457E953A1AAC9CCCBD535AAB46F64B26DE(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// selectedOption = 0;
		__this->___selectedOption_7 = 0;
	}

IL_0028:
	{
		// UpdateCharacter(selectedOption);
		int32_t L_4 = __this->___selectedOption_7;
		CharaterManger_UpdateCharacter_mC48D25EBC841C37082BB08CEBB310ED0815365B4(__this, L_4, NULL);
		// Save();
		CharaterManger_Save_m83F1C6870188BC081920356012B02CFA10AD7984(__this, NULL);
		// }
		return;
	}
}
// System.Void CharaterManger::BackOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_BackOption_m87BBF44D6F5187DB441A79B25755FC326F6D5784 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) 
{
	{
		// selectedOption--;
		int32_t L_0 = __this->___selectedOption_7;
		__this->___selectedOption_7 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(selectedOption <0)
		int32_t L_1 = __this->___selectedOption_7;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// selectedOption = characterDB.CharacterCount - 1;
		Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* L_2 = __this->___characterDB_4;
		int32_t L_3;
		L_3 = Characterdatabase_get_CharacterCount_m8C0FFB457E953A1AAC9CCCBD535AAB46F64B26DE(L_2, NULL);
		__this->___selectedOption_7 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_002a:
	{
		// UpdateCharacter(selectedOption);
		int32_t L_4 = __this->___selectedOption_7;
		CharaterManger_UpdateCharacter_mC48D25EBC841C37082BB08CEBB310ED0815365B4(__this, L_4, NULL);
		// Save();
		CharaterManger_Save_m83F1C6870188BC081920356012B02CFA10AD7984(__this, NULL);
		// }
		return;
	}
}
// System.Void CharaterManger::UpdateCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_UpdateCharacter_mC48D25EBC841C37082BB08CEBB310ED0815365B4 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, int32_t ___selectedOption0, const RuntimeMethod* method) 
{
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_0 = NULL;
	{
		// Character character = characterDB.GetCharacter(selectedOption);
		Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* L_0 = __this->___characterDB_4;
		int32_t L_1 = ___selectedOption0;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_2;
		L_2 = Characterdatabase_GetCharacter_mA37CF4251C87F269028D8391DD741E485DB9E713(L_0, L_1, NULL);
		V_0 = L_2;
		// artworkSprite.sprite = character.characterSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___artworkSprite_6;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_4 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = L_4->___characterSprite_1;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_3, L_5, NULL);
		// nameText.text = character.characterName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___nameText_5;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_7 = V_0;
		String_t* L_8 = L_7->___characterName_0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void CharaterManger::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_Load_m1EB04611FDE3C2018F95E2503E101B1F388ECF0E (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedOption = PlayerPrefs.GetInt("selectedOption");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A, NULL);
		__this->___selectedOption_7 = L_0;
		// }
		return;
	}
}
// System.Void CharaterManger::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_Save_m83F1C6870188BC081920356012B02CFA10AD7984 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("selectedOption" , selectedOption);
		int32_t L_0 = __this->___selectedOption_7;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A, L_0, NULL);
		// }
		return;
	}
}
// System.Void CharaterManger::ChangeScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger_ChangeScene_m5E8987F66575F6316E7B648E8D80907D5A910978 (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, int32_t ___sceneID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneID);
		int32_t L_0 = ___sceneID0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void CharaterManger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharaterManger__ctor_m88EDC0E11D6BD52ABAF9364694FBC203223D8FAA (CharaterManger_tFFBA1D7BDCC527095FC3CE818A3A88593C9E94AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Destroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_Start_mCF20DA0C3F0FE8F7158A6E94E39E4E47F052781F (Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Destroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy__ctor_m413F23B3BA1D73EE1AAEB419EAC5307616BE5C39 (Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Exit::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exit_ExitButton_mC898B1E648CDB330530DF5331764AEF127228E1B (Exit_t004FBB16F8F40CC113E50B8559F8E1CDAADE0B7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3217CB7B28C01131D24B3B8C2E6F2E25843CCE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// Debug.Log("Quti");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE3217CB7B28C01131D24B3B8C2E6F2E25843CCE7, NULL);
		// }
		return;
	}
}
// System.Void Exit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exit__ctor_m349E3677157A98E09052A992751B0C4FF66C10B3 (Exit_t004FBB16F8F40CC113E50B8559F8E1CDAADE0B7E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadScenes::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScenes_LoadScene_m0FBB9269564C46858E108D187241AE02D8BDF4B2 (LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadScene_Coroutine(index));
		int32_t L_0 = ___index0;
		RuntimeObject* L_1;
		L_1 = LoadScenes_LoadScene_Coroutine_m35FAB839F2DF54E1C4B042D93C1455DBF31C1C3F(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadScenes::LoadScene_Coroutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadScenes_LoadScene_Coroutine_m35FAB839F2DF54E1C4B042D93C1455DBF31C1C3F (LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* L_0 = (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5*)il2cpp_codegen_object_new(U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5_il2cpp_TypeInfo_var);
		U3CLoadScene_CoroutineU3Ed__3__ctor_m9DA4715119E712A489A3496699E13C0914A90363(L_0, 0, NULL);
		U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* L_2 = L_1;
		int32_t L_3 = ___index0;
		L_2->___index_3 = L_3;
		return L_2;
	}
}
// System.Void LoadScenes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScenes__ctor_m0A5DDCF2D9003E8B870BE1685D3B5C9A2950E79C (LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadScenes/<LoadScene_Coroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScene_CoroutineU3Ed__3__ctor_m9DA4715119E712A489A3496699E13C0914A90363 (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LoadScenes/<LoadScene_Coroutine>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScene_CoroutineU3Ed__3_System_IDisposable_Dispose_m8719B15F5B0123975E9E787656F98D8D0F4E0167 (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LoadScenes/<LoadScene_Coroutine>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadScene_CoroutineU3Ed__3_MoveNext_mDA4A72F51BE6B1B93D7D7E7D392949E67140202E (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// progressSlider.value = 0;
		LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* L_4 = V_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4->___progressSlider_5;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, (0.0f));
		// loaderUI.SetActive(true);
		LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* L_6 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___loaderUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index);
		int32_t L_8 = __this->___index_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_9;
		L_9 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(L_8, NULL);
		__this->___U3CasyncOperationU3E5__2_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__2_4), (void*)L_9);
		// asyncOperation.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_10 = __this->___U3CasyncOperationU3E5__2_4;
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_10, (bool)0, NULL);
		// float progress = 0;
		__this->___U3CprogressU3E5__3_5 = (0.0f);
		goto IL_00d9;
	}

IL_0067:
	{
		// progress = Mathf.MoveTowards(progress , asyncOperation.progress, Time.deltaTime);
		float L_11 = __this->___U3CprogressU3E5__3_5;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_12 = __this->___U3CasyncOperationU3E5__2_4;
		float L_13;
		L_13 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_12, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15;
		L_15 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_11, L_13, L_14, NULL);
		__this->___U3CprogressU3E5__3_5 = L_15;
		// progressSlider.value = progress;
		LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* L_16 = V_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_17 = L_16->___progressSlider_5;
		float L_18 = __this->___U3CprogressU3E5__3_5;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_17, L_18);
		// if (progress >= 0.9f)
		float L_19 = __this->___U3CprogressU3E5__3_5;
		if ((!(((float)L_19) >= ((float)(0.899999976f)))))
		{
			goto IL_00c2;
		}
	}
	{
		// progressSlider.value =1;
		LoadScenes_t0B917D855B0E200276F8539038904319D086D44E* L_20 = V_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_21 = L_20->___progressSlider_5;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_21, (1.0f));
		// asyncOperation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_22 = __this->___U3CasyncOperationU3E5__2_4;
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_22, (bool)1, NULL);
	}

IL_00c2:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d9:
	{
		// while (!asyncOperation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_23 = __this->___U3CasyncOperationU3E5__2_4;
		bool L_24;
		L_24 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_23, NULL);
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadScenes/<LoadScene_Coroutine>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadScene_CoroutineU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m75BDBE9CBBB1BD8766D55CC9DAAF55B431F83BC1 (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LoadScenes/<LoadScene_Coroutine>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScene_CoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mEB35AD9E1C1FF075A50413E5F25B4FCDA5A2A6F9 (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadScene_CoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mEB35AD9E1C1FF075A50413E5F25B4FCDA5A2A6F9_RuntimeMethod_var)));
	}
}
// System.Object LoadScenes/<LoadScene_Coroutine>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadScene_CoroutineU3Ed__3_System_Collections_IEnumerator_get_Current_m519C7E7AB2DC6E4FDD45BDE6427C9129044CCC25 (U3CLoadScene_CoroutineU3Ed__3_t4F55103DD74BCE81A5A314DE5EAAE2356F9D77C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ONOFF::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONOFF_start_mE6FB2E99E6D54CB728291D781EC87405B929FB7C (ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC* __this, const RuntimeMethod* method) 
{
	{
		// Cat.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Cat_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Dog.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Dog_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ONOFF::CatActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONOFF_CatActive_m40CB76FC908C562EFCDEA4656D44078E0F99370E (ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC* __this, int32_t ___other0, const RuntimeMethod* method) 
{
	{
		// Cat.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Cat_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ONOFF::DogActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONOFF_DogActive_mEF941D89A29845297E14ADBF6CBB4F5F9624C387 (ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC* __this, int32_t ___other0, const RuntimeMethod* method) 
{
	{
		// Dog.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Dog_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ONOFF::OpCatActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONOFF_OpCatActive_m093DD2CAC0D3DEDF855B84552597A53C602004F8 (ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC* __this, int32_t ___other0, const RuntimeMethod* method) 
{
	{
		// Cat.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Cat_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ONOFF::OpDogActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONOFF_OpDogActive_mD563BA39CAFC1B465CECB262897EE71C56322364 (ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC* __this, int32_t ___other0, const RuntimeMethod* method) 
{
	{
		// Dog.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Dog_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ONOFF::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ONOFF__ctor_mA18B6FC68D3757E5E2169099EA28BB73507D22AC (ONOFF_tE10F0D2E74CD91F5F2F338420D65849EAD8CC2CC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeScene::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_LoadScene_m8A5C24639E8AD06BBBC4AA0B6C2FF2527C4D30D9 (ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene__ctor_m31CB879A0944B416D16AA2130F9504E1ABAD6FA1 (ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Start_m6020E6CFF13BDC27498882840D6AE9674E482BB8 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScoreNum = 0;
		__this->___ScoreNum_7 = 0;
		// MoneyMini = 0;
		__this->___MoneyMini_8 = (0.0f);
		// Score.text = "Score = " + ScoreNum;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Score_5;
		int32_t* L_1 = (&__this->___ScoreNum_7);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// MoneyMiniText.text = "Money = " + MoneyMini;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___MoneyMiniText_6;
		float* L_5 = (&__this->___MoneyMini_8);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// petData.LoadPetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_8 = __this->___petData_4;
		PetData_LoadPetData_m1A666E17C15DF7853C034DD4C183D4D2CB81AFC1(L_8, NULL);
		// }
		return;
	}
}
// System.Void Manager::correctAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_correctAnswer_m61BE63E9F94D8D33B74DDD1D413BE9884C1E5CC5 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759224471F830122DE360CA6EACBBADC7B33B6C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentLevel + 1 != Levels.Length)
		int32_t L_0 = __this->___currentLevel_11;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___Levels_10;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0084;
		}
	}
	{
		// Levels[currentLevel].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___Levels_10;
		int32_t L_3 = __this->___currentLevel_11;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// currentLevel++;
		int32_t L_6 = __this->___currentLevel_11;
		__this->___currentLevel_11 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// Levels[currentLevel].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___Levels_10;
		int32_t L_8 = __this->___currentLevel_11;
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// ScoreNum +=1;
		int32_t L_11 = __this->___ScoreNum_7;
		__this->___ScoreNum_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// Score.text = "Score = " + ScoreNum;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___Score_5;
		int32_t* L_13 = (&__this->___ScoreNum_7);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB, L_14, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// Debug.Log("Correct");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral759224471F830122DE360CA6EACBBADC7B33B6C6, NULL);
		// MoneyUpdate();
		Manager_MoneyUpdate_m51554C3EFFCEFC1285AAEC9B18E887FD982A9F18(__this, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Manager::wrongAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_wrongAnswer_mE10C8F4AC0C8F84C065C4620263C91F1A6B1BA71 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667A6D03D3F25FF1CD074CEE58A5C8EC5CBD08AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentLevel + 1 != Levels.Length)
		int32_t L_0 = __this->___currentLevel_11;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___Levels_10;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		// Levels[currentLevel].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___Levels_10;
		int32_t L_3 = __this->___currentLevel_11;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// currentLevel++;
		int32_t L_6 = __this->___currentLevel_11;
		__this->___currentLevel_11 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// Levels[currentLevel].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___Levels_10;
		int32_t L_8 = __this->___currentLevel_11;
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// Debug.Log("Wrong");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral667A6D03D3F25FF1CD074CEE58A5C8EC5CBD08AA, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Manager::MoneyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_MoneyUpdate_m51554C3EFFCEFC1285AAEC9B18E887FD982A9F18 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (ScoreNum)
		int32_t L_0 = __this->___ScoreNum_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_00a5;
			}
			case 2:
			{
				goto IL_0126;
			}
			case 3:
			{
				goto IL_01a7;
			}
			case 4:
			{
				goto IL_0228;
			}
		}
	}
	{
		return;
	}

IL_0024:
	{
		// RandomMoney += Random.Range(1,2);
		float L_2 = __this->___RandomMoney_9;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 2, NULL);
		__this->___RandomMoney_9 = ((float)il2cpp_codegen_add(L_2, ((float)L_3)));
		// MoneyMini += RandomMoney;
		float L_4 = __this->___MoneyMini_8;
		float L_5 = __this->___RandomMoney_9;
		__this->___MoneyMini_8 = ((float)il2cpp_codegen_add(L_4, L_5));
		// petData.money += RandomMoney ;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_6 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_7 = L_6;
		float L_8 = L_7->___money_6;
		float L_9 = __this->___RandomMoney_9;
		L_7->___money_6 = ((float)il2cpp_codegen_add(L_8, L_9));
		// MoneyMiniText.text = "Money = " + MoneyMini;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___MoneyMiniText_6;
		float* L_11 = (&__this->___MoneyMini_8);
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618, L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// Debug.Log(petData.money);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_14 = __this->___petData_4;
		float L_15 = L_14->___money_6;
		float L_16 = L_15;
		RuntimeObject* L_17 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// petData.SavePetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_18 = __this->___petData_4;
		PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6(L_18, NULL);
		// break;
		return;
	}

IL_00a5:
	{
		// RandomMoney += Random.Range(1,2);
		float L_19 = __this->___RandomMoney_9;
		int32_t L_20;
		L_20 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 2, NULL);
		__this->___RandomMoney_9 = ((float)il2cpp_codegen_add(L_19, ((float)L_20)));
		// MoneyMini += RandomMoney;
		float L_21 = __this->___MoneyMini_8;
		float L_22 = __this->___RandomMoney_9;
		__this->___MoneyMini_8 = ((float)il2cpp_codegen_add(L_21, L_22));
		// petData.money += RandomMoney ;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_23 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_24 = L_23;
		float L_25 = L_24->___money_6;
		float L_26 = __this->___RandomMoney_9;
		L_24->___money_6 = ((float)il2cpp_codegen_add(L_25, L_26));
		// MoneyMiniText.text = "Money = " + MoneyMini;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___MoneyMiniText_6;
		float* L_28 = (&__this->___MoneyMini_8);
		String_t* L_29;
		L_29 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618, L_29, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_30);
		// Debug.Log(petData.money);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_31 = __this->___petData_4;
		float L_32 = L_31->___money_6;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_34, NULL);
		// petData.SavePetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_35 = __this->___petData_4;
		PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6(L_35, NULL);
		// break;
		return;
	}

IL_0126:
	{
		// RandomMoney += Random.Range(1,2);
		float L_36 = __this->___RandomMoney_9;
		int32_t L_37;
		L_37 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 2, NULL);
		__this->___RandomMoney_9 = ((float)il2cpp_codegen_add(L_36, ((float)L_37)));
		// MoneyMini += RandomMoney;
		float L_38 = __this->___MoneyMini_8;
		float L_39 = __this->___RandomMoney_9;
		__this->___MoneyMini_8 = ((float)il2cpp_codegen_add(L_38, L_39));
		// petData.money += RandomMoney ;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_40 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_41 = L_40;
		float L_42 = L_41->___money_6;
		float L_43 = __this->___RandomMoney_9;
		L_41->___money_6 = ((float)il2cpp_codegen_add(L_42, L_43));
		// MoneyMiniText.text = "Money = " + MoneyMini;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___MoneyMiniText_6;
		float* L_45 = (&__this->___MoneyMini_8);
		String_t* L_46;
		L_46 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_45, NULL);
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618, L_46, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_47);
		// Debug.Log(petData.money);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_48 = __this->___petData_4;
		float L_49 = L_48->___money_6;
		float L_50 = L_49;
		RuntimeObject* L_51 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_50);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_51, NULL);
		// petData.SavePetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_52 = __this->___petData_4;
		PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6(L_52, NULL);
		// break;
		return;
	}

IL_01a7:
	{
		// RandomMoney += Random.Range(1,3);
		float L_53 = __this->___RandomMoney_9;
		int32_t L_54;
		L_54 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		__this->___RandomMoney_9 = ((float)il2cpp_codegen_add(L_53, ((float)L_54)));
		// MoneyMini += RandomMoney;
		float L_55 = __this->___MoneyMini_8;
		float L_56 = __this->___RandomMoney_9;
		__this->___MoneyMini_8 = ((float)il2cpp_codegen_add(L_55, L_56));
		// petData.money += RandomMoney ;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_57 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_58 = L_57;
		float L_59 = L_58->___money_6;
		float L_60 = __this->___RandomMoney_9;
		L_58->___money_6 = ((float)il2cpp_codegen_add(L_59, L_60));
		// MoneyMiniText.text = "Money = " + MoneyMini;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_61 = __this->___MoneyMiniText_6;
		float* L_62 = (&__this->___MoneyMini_8);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		String_t* L_64;
		L_64 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618, L_63, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_61, L_64);
		// Debug.Log(petData.money);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_65 = __this->___petData_4;
		float L_66 = L_65->___money_6;
		float L_67 = L_66;
		RuntimeObject* L_68 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_67);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_68, NULL);
		// petData.SavePetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_69 = __this->___petData_4;
		PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6(L_69, NULL);
		// break;
		return;
	}

IL_0228:
	{
		// RandomMoney += Random.Range(1,3);
		float L_70 = __this->___RandomMoney_9;
		int32_t L_71;
		L_71 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		__this->___RandomMoney_9 = ((float)il2cpp_codegen_add(L_70, ((float)L_71)));
		// MoneyMini += RandomMoney;
		float L_72 = __this->___MoneyMini_8;
		float L_73 = __this->___RandomMoney_9;
		__this->___MoneyMini_8 = ((float)il2cpp_codegen_add(L_72, L_73));
		// petData.money += RandomMoney ;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_74 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_75 = L_74;
		float L_76 = L_75->___money_6;
		float L_77 = __this->___RandomMoney_9;
		L_75->___money_6 = ((float)il2cpp_codegen_add(L_76, L_77));
		// MoneyMiniText.text = "Money = " + MoneyMini;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___MoneyMiniText_6;
		float* L_79 = (&__this->___MoneyMini_8);
		String_t* L_80;
		L_80 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_79, NULL);
		String_t* L_81;
		L_81 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E3FA6FA7BF1C47CC265EB067888A531E4F70618, L_80, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_78, L_81);
		// Debug.Log(petData.money);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_82 = __this->___petData_4;
		float L_83 = L_82->___money_6;
		float L_84 = L_83;
		RuntimeObject* L_85 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_84);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_85, NULL);
		// petData.SavePetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_86 = __this->___petData_4;
		PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6(L_86, NULL);
		// }
		return;
	}
}
// System.Void Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_m657ECC756CD44219E6C63B972C78FD4164A0CE1A (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PetData petData = new PetData ("", 100f, 100f, 100f, 100f, 1, 2);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C*)il2cpp_codegen_object_new(PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var);
		PetData__ctor_mC264AA9E21D11A47CE7A98F20326C5D78816E72A(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (100.0f), (100.0f), (100.0f), (100.0f), 1, (2.0f), NULL);
		__this->___petData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petData_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Daydown::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_Awake_m9DB1E48CF96D26EF1AAA479716F50CB29332593E (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Daydown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_Start_m2642236C146D4055A12A49ED147E36EA05ECD1E4 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41ADB88A61089C494B0244872EF04739043644AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral965515748584892FF4AD0ABEDACA8E09902E1B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!PlayerPrefs.HasKey("Happy"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// happTickRate =100;
		__this->___happTickRate_16 = ((int32_t)100);
		goto IL_001c;
	}

IL_0016:
	{
		// LoadHappy();
		Daydown_LoadHappy_m685D78410EE88E5F16BA2E61389AAEAAEFA06E0D(__this, NULL);
	}

IL_001c:
	{
		// if(!PlayerPrefs.HasKey("Hunger"))
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11, NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		// hungerTickRate =100;
		__this->___hungerTickRate_15 = ((int32_t)100);
		goto IL_0038;
	}

IL_0032:
	{
		// LoadHunger();
		Daydown_LoadHunger_m49D72E3B2B5380BF3840D6336A2637AFCAD33AB0(__this, NULL);
	}

IL_0038:
	{
		// if(!PlayerPrefs.HasKey("Energy"))
		bool L_2;
		L_2 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, NULL);
		if (L_2)
		{
			goto IL_004e;
		}
	}
	{
		// energyTickRate = 100;
		__this->___energyTickRate_17 = ((int32_t)100);
		goto IL_0054;
	}

IL_004e:
	{
		// LoadEnergy();
		Daydown_LoadEnergy_mEA5AFF061DD94263D2B49F707ED4BD698F2DBC71(__this, NULL);
	}

IL_0054:
	{
		// if(!PlayerPrefs.HasKey("Day"))
		bool L_3;
		L_3 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, NULL);
		if (L_3)
		{
			goto IL_0069;
		}
	}
	{
		// day = 1;
		__this->___day_18 = 1;
		goto IL_006f;
	}

IL_0069:
	{
		// LoadDay();
		Daydown_LoadDay_m81805884B84B0E5806FC784899D4A88015F506D0(__this, NULL);
	}

IL_006f:
	{
		// DayText.text = day.ToString() + " : Day";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___DayText_5;
		int32_t* L_5 = (&__this->___day_18);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteral965515748584892FF4AD0ABEDACA8E09902E1B28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// FoodText.text = hungerTickRate.ToString()+ " : Food";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___FoodText_6;
		int32_t* L_9 = (&__this->___hungerTickRate_15);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteral41ADB88A61089C494B0244872EF04739043644AE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// EnergyText.text = energyTickRate.ToString() + " : Energy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___EnergyText_7;
		int32_t* L_13 = (&__this->___energyTickRate_17);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// HappingessText.text = happTickRate.ToString() + " : Happy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___HappingessText_8;
		int32_t* L_17 = (&__this->___happTickRate_16);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, _stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// }
		return;
	}
}
// System.Void Daydown::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_Update_m390840E2C44A2F77A0833D29BF89C5C0D9709B65 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	{
		// if(hungerTickRate <=100)
		int32_t L_0 = __this->___hungerTickRate_15;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)100))))
		{
			goto IL_0016;
		}
	}
	{
		// fullFool.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fullFool_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
	}

IL_0016:
	{
		// if(energyTickRate  <= 100)
		int32_t L_2 = __this->___energyTickRate_17;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)100))))
		{
			goto IL_002c;
		}
	}
	{
		// fullEnergy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___fullEnergy_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_002c:
	{
		// if(happTickRate  <= 100)
		int32_t L_4 = __this->___happTickRate_16;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)100))))
		{
			goto IL_0042;
		}
	}
	{
		// fullHappy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___fullHappy_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Daydown::AddDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddDay_m1BC5714C196A472D7898B916325BEA43EA021795 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41ADB88A61089C494B0244872EF04739043644AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral965515748584892FF4AD0ABEDACA8E09902E1B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// day +=1;
		int32_t L_0 = __this->___day_18;
		__this->___day_18 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// DayText.text = day.ToString() + " : Day";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___DayText_5;
		int32_t* L_2 = (&__this->___day_18);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral965515748584892FF4AD0ABEDACA8E09902E1B28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// if(day == 2 ||day == 4||day == 6||day == 8||day == 10 ||day == 12 ||day == 14 ||day == 16 ||day == 18 ||day == 20 ||day == 22 ||day == 24 ||day == 26 ||day == 28)
		int32_t L_5 = __this->___day_18;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_6 = __this->___day_18;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_7 = __this->___day_18;
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_8 = __this->___day_18;
		if ((((int32_t)L_8) == ((int32_t)8)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_9 = __this->___day_18;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_10 = __this->___day_18;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)12))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_11 = __this->___day_18;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)14))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_12 = __this->___day_18;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)16))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_13 = __this->___day_18;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)18))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_14 = __this->___day_18;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)20))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_15 = __this->___day_18;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)22))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_16 = __this->___day_18;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)24))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_17 = __this->___day_18;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)26))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_18 = __this->___day_18;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)28)))))
		{
			goto IL_0149;
		}
	}

IL_00bc:
	{
		// hungerTickRate -=10;
		int32_t L_19 = __this->___hungerTickRate_15;
		__this->___hungerTickRate_15 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)10)));
		// FoodText.text = hungerTickRate.ToString() + " : Food";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___FoodText_6;
		int32_t* L_21 = (&__this->___hungerTickRate_15);
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, _stringLiteral41ADB88A61089C494B0244872EF04739043644AE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// energyTickRate -=10;
		int32_t L_24 = __this->___energyTickRate_17;
		__this->___energyTickRate_17 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)10)));
		// EnergyText.text = energyTickRate.ToString() + " : Energy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___EnergyText_7;
		int32_t* L_26 = (&__this->___energyTickRate_17);
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_27, _stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_28);
		// happTickRate -=10;
		int32_t L_29 = __this->___happTickRate_16;
		__this->___happTickRate_16 = ((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)10)));
		// HappingessText.text = happTickRate.ToString() + " : Happy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___HappingessText_8;
		int32_t* L_31 = (&__this->___happTickRate_16);
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_31, NULL);
		String_t* L_33;
		L_33 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_32, _stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_33);
	}

IL_0149:
	{
		// SaveDay();
		Daydown_SaveDay_mB1879EB1EECED2BD13195A72DE5E282F43C3837E(__this, NULL);
		// if (day == 30)
		int32_t L_34 = __this->___day_18;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0187;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// PlayerPrefs.DeleteKey("Day");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, NULL);
		// PlayerPrefs.DeleteKey("Happy");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, NULL);
		// PlayerPrefs.DeleteKey("Energy");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, NULL);
		// PlayerPrefs.DeleteKey("Hunger");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11, NULL);
	}

IL_0187:
	{
		// }
		return;
	}
}
// System.Void Daydown::AddFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddFood_m978623E2DBD3ECAC3E42D3D1784B9E387B22AD44 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41ADB88A61089C494B0244872EF04739043644AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hungerTickRate +=20;
		int32_t L_0 = __this->___hungerTickRate_15;
		__this->___hungerTickRate_15 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)20)));
		// FoodText.text = hungerTickRate.ToString() + " : Food";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___FoodText_6;
		int32_t* L_2 = (&__this->___hungerTickRate_15);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral41ADB88A61089C494B0244872EF04739043644AE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// energyTickRate -=5;
		int32_t L_5 = __this->___energyTickRate_17;
		__this->___energyTickRate_17 = ((int32_t)il2cpp_codegen_subtract(L_5, 5));
		// EnergyText.text = energyTickRate.ToString() + " : Energy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___EnergyText_7;
		int32_t* L_7 = (&__this->___energyTickRate_17);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// if(hungerTickRate >100)
		int32_t L_10 = __this->___hungerTickRate_15;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0073;
		}
	}
	{
		// fullFool.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___fullFool_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0073:
	{
		// SaveHunger();
		Daydown_SaveHunger_m307E6EDE48AC066397AFD2A03E7F14AD113E7007(__this, NULL);
		// }
		return;
	}
}
// System.Void Daydown::AddEnergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddEnergy_m56C01F93DCEFD4FBAF3AF620A6632A6594DFE462 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41ADB88A61089C494B0244872EF04739043644AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hungerTickRate -=5;
		int32_t L_0 = __this->___hungerTickRate_15;
		__this->___hungerTickRate_15 = ((int32_t)il2cpp_codegen_subtract(L_0, 5));
		// FoodText.text = hungerTickRate.ToString() + " : Food";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___FoodText_6;
		int32_t* L_2 = (&__this->___hungerTickRate_15);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral41ADB88A61089C494B0244872EF04739043644AE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// energyTickRate +=20;
		int32_t L_5 = __this->___energyTickRate_17;
		__this->___energyTickRate_17 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)20)));
		// EnergyText.text = energyTickRate.ToString() + " : Energy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___EnergyText_7;
		int32_t* L_7 = (&__this->___energyTickRate_17);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// if(energyTickRate >100)
		int32_t L_10 = __this->___energyTickRate_17;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0073;
		}
	}
	{
		// fullEnergy.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___fullEnergy_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0073:
	{
		// SaveEnergy();
		Daydown_SaveEnergy_m45EDE136ADA5264B5C2E4884ED1DE8875618DFEE(__this, NULL);
		// }
		return;
	}
}
// System.Void Daydown::AddHappinger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_AddHappinger_m7D2A9D2E2F47306D7984CA2DA26F2CC0FBE2E48B (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41ADB88A61089C494B0244872EF04739043644AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hungerTickRate -=5;
		int32_t L_0 = __this->___hungerTickRate_15;
		__this->___hungerTickRate_15 = ((int32_t)il2cpp_codegen_subtract(L_0, 5));
		// FoodText.text = hungerTickRate.ToString() + " : Food";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___FoodText_6;
		int32_t* L_2 = (&__this->___hungerTickRate_15);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral41ADB88A61089C494B0244872EF04739043644AE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// energyTickRate -=5;
		int32_t L_5 = __this->___energyTickRate_17;
		__this->___energyTickRate_17 = ((int32_t)il2cpp_codegen_subtract(L_5, 5));
		// EnergyText.text = energyTickRate.ToString() + " : Energy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___EnergyText_7;
		int32_t* L_7 = (&__this->___energyTickRate_17);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral0FDD1186B61EECCC379B3796250273F495B2ED70, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// happTickRate +=20;
		int32_t L_10 = __this->___happTickRate_16;
		__this->___happTickRate_16 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)20)));
		// HappingessText.text = happTickRate.ToString() + " : Happy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___HappingessText_8;
		int32_t* L_12 = (&__this->___happTickRate_16);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, _stringLiteral7D21484E62F3557F807CD9D6EA4C498D1D4A35D1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// if(happTickRate >100)
		int32_t L_15 = __this->___happTickRate_16;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)100))))
		{
			goto IL_00a1;
		}
	}
	{
		// fullHappy.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___fullHappy_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_00a1:
	{
		// SaveHappy();
		Daydown_SaveHappy_m61C9D6C880A7BAB3909297AD4B930D5E346D3FEA(__this, NULL);
		// }
		return;
	}
}
// System.Void Daydown::SaveHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveHappy_m61C9D6C880A7BAB3909297AD4B930D5E346D3FEA (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Happy",happTickRate);
		int32_t L_0 = __this->___happTickRate_16;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, L_0, NULL);
		// }
		return;
	}
}
// System.Void Daydown::LoadHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadHappy_m685D78410EE88E5F16BA2E61389AAEAAEFA06E0D (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// happTickRate = PlayerPrefs.GetInt("Happy");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, NULL);
		__this->___happTickRate_16 = L_0;
		// }
		return;
	}
}
// System.Void Daydown::SaveHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveHunger_m307E6EDE48AC066397AFD2A03E7F14AD113E7007 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Hunger",hungerTickRate);
		int32_t L_0 = __this->___hungerTickRate_15;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11, L_0, NULL);
		// }
		return;
	}
}
// System.Void Daydown::LoadHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadHunger_m49D72E3B2B5380BF3840D6336A2637AFCAD33AB0 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hungerTickRate = PlayerPrefs.GetInt("Hunger");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral6D597AF4D915551FCE6E8CDE4FC323C8F855AF11, NULL);
		__this->___hungerTickRate_15 = L_0;
		// }
		return;
	}
}
// System.Void Daydown::SaveEnergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveEnergy_m45EDE136ADA5264B5C2E4884ED1DE8875618DFEE (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Energy" , energyTickRate);
		int32_t L_0 = __this->___energyTickRate_17;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, L_0, NULL);
		// }
		return;
	}
}
// System.Void Daydown::LoadEnergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadEnergy_mEA5AFF061DD94263D2B49F707ED4BD698F2DBC71 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// energyTickRate = PlayerPrefs.GetInt("Energy");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, NULL);
		__this->___energyTickRate_17 = L_0;
		// }
		return;
	}
}
// System.Void Daydown::SaveDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_SaveDay_mB1879EB1EECED2BD13195A72DE5E282F43C3837E (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Day", day);
		int32_t L_0 = __this->___day_18;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, L_0, NULL);
		// }
		return;
	}
}
// System.Void Daydown::LoadDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown_LoadDay_m81805884B84B0E5806FC784899D4A88015F506D0 (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// day = PlayerPrefs.GetInt("Day");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, NULL);
		__this->___day_18 = L_0;
		// }
		return;
	}
}
// System.Void Daydown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Daydown__ctor_m6EE9BDBF280DB19EA0E33A368314BA67ADDBCB0B (Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* __this, const RuntimeMethod* method) 
{
	{
		// int day = 1;
		__this->___day_18 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputDay::AddStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDay_AddStatus_mAC321AF01A5F064A941E1F04E8E0E5E89A1F88C7 (InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Daydown.instance.AddDay();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_0 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddDay_m1BC5714C196A472D7898B916325BEA43EA021795(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputDay::AddHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDay_AddHunger_mA9E606F927753B2E9B636F3D6090C8CA34B9322D (InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Daydown.instance.AddDay();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_0 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddDay_m1BC5714C196A472D7898B916325BEA43EA021795(L_0, NULL);
		// Daydown.instance.AddFood();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_1 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddFood_m978623E2DBD3ECAC3E42D3D1784B9E387B22AD44(L_1, NULL);
		// }
		return;
	}
}
// System.Void InputDay::Addenergy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDay_Addenergy_m402302E9697C27EE1EEBF28069DDA8F124D43FEE (InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Daydown.instance.AddDay();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_0 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddDay_m1BC5714C196A472D7898B916325BEA43EA021795(L_0, NULL);
		// Daydown.instance.AddEnergy();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_1 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddEnergy_m56C01F93DCEFD4FBAF3AF620A6632A6594DFE462(L_1, NULL);
		// }
		return;
	}
}
// System.Void InputDay::AddHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDay_AddHappy_m39383A33695273536A442D11881DBB972CA4BD11 (InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Daydown.instance.AddDay();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_0 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddDay_m1BC5714C196A472D7898B916325BEA43EA021795(L_0, NULL);
		// Daydown.instance.AddHappinger();
		Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C* L_1 = ((Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_StaticFields*)il2cpp_codegen_static_fields_for(Daydown_t56FE9CB154AC6A387A1BAF995A5F15059F1B038C_il2cpp_TypeInfo_var))->___instance_4;
		Daydown_AddHappinger_m7D2A9D2E2F47306D7984CA2DA26F2CC0FBE2E48B(L_1, NULL);
		// }
		return;
	}
}
// System.Void InputDay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDay__ctor_m04CACF91EA8C475B85428F5066BC7BC6BD15D21B (InputDay_tFEAC91DD8478EA8D8634CAEB8910A8EDD1D52D65* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONSaving::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_Start_m6FFA89343882334ACF5860344ECDC0994F29D308 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_AddMoney_mFD710C8EB2582C2A396B0AC40EEBD648D48AC156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_DayPlsu_mFE71B37FF35F846147DB52364A2FC7C3D52EB3EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_FoodStatus_m185A2AC74A7BDDFF8CCF3B003A71BA56752A4917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_HappyStatus_m902B2ACE5972905C45FCC70E5A9D7EC56C6F5829_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_HealthyStatus_mD052319713150766DF9BCEED7358966782F886A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_NextScenMiniGame_mD84B2F5F01FF47C014161EC95B01025D82A6EB5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_NextScen_m7E4F2F5501D512726A4B080550C40E6C611FDB26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPath();
		JSONSaving_SetPath_mEC4A1571DD111B5F06D032ABD7D8769A02B80712(__this, NULL);
		// CreatePlayerData();
		JSONSaving_CreatePlayerData_m35DEF87C7D25A4E15BC566E398BD024F3108DCF0(__this, NULL);
		// if(petData == null)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// CreatePlayerData();
		JSONSaving_CreatePlayerData_m35DEF87C7D25A4E15BC566E398BD024F3108DCF0(__this, NULL);
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		goto IL_0033;
	}

IL_0022:
	{
		// LoadPlayerData();
		JSONSaving_LoadPlayerData_m1DA19903053C2DA55FD18B7D445947C91CA4030F(__this, NULL);
		// petData.LoadPetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = __this->___petData_4;
		PetData_LoadPetData_m1A666E17C15DF7853C034DD4C183D4D2CB81AFC1(L_1, NULL);
	}

IL_0033:
	{
		// Button btnSave =SaveButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SaveButton_7;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_2, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnSave.onClick.AddListener(SaveData);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// Button btnDay =DayButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___DayButton_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_6, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnDay.onClick.AddListener(DayPlsu);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)JSONSaving_DayPlsu_mFE71B37FF35F846147DB52364A2FC7C3D52EB3EF_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// Button btnNext =NextScene.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___NextScene_9;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11;
		L_11 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_10, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnNext.onClick.AddListener(NextScen);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)JSONSaving_NextScen_m7E4F2F5501D512726A4B080550C40E6C611FDB26_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_13, NULL);
		// Button btnNextSceneMiniGame = NextSceneMiniGame.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___NextSceneMiniGame_10;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15;
		L_15 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_14, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnNextSceneMiniGame.onClick.AddListener(NextScenMiniGame);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_16;
		L_16 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_15, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)JSONSaving_NextScenMiniGame_mD84B2F5F01FF47C014161EC95B01025D82A6EB5D_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_16, L_17, NULL);
		// Button btnFood = FoodButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___FoodButton_12;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19;
		L_19 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_18, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnFood.onClick.AddListener(FoodStatus);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_20;
		L_20 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_19, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_21, __this, (intptr_t)((void*)JSONSaving_FoodStatus_m185A2AC74A7BDDFF8CCF3B003A71BA56752A4917_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_20, L_21, NULL);
		// Button btnHappy = HappyButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___HappyButton_13;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23;
		L_23 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_22, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnHappy.onClick.AddListener(HappyStatus);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_24;
		L_24 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_23, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_25, __this, (intptr_t)((void*)JSONSaving_HappyStatus_m902B2ACE5972905C45FCC70E5A9D7EC56C6F5829_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_24, L_25, NULL);
		// Button btnHealthy = HealthyButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->___HealthyButton_14;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27;
		L_27 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_26, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnHealthy.onClick.AddListener(HealthyStatus);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_28;
		L_28 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_27, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_29 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_29, __this, (intptr_t)((void*)JSONSaving_HealthyStatus_mD052319713150766DF9BCEED7358966782F886A3_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_28, L_29, NULL);
		// Button btnMoney = MoneyButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___MoneyButton_15;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31;
		L_31 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_30, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnMoney.onClick.AddListener(AddMoney);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_32;
		L_32 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_31, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_33 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_33, __this, (intptr_t)((void*)JSONSaving_AddMoney_mFD710C8EB2582C2A396B0AC40EEBD648D48AC156_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_32, L_33, NULL);
		// if(petData.food > 100)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_34 = __this->___petData_4;
		float L_35 = L_34->___food_1;
		if ((!(((float)L_35) > ((float)(100.0f)))))
		{
			goto IL_0159;
		}
	}
	{
		// FullFood.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___FullFood_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
	}

IL_0159:
	{
		// if(petData.energy > 100)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_37 = __this->___petData_4;
		float L_38 = L_37->___energy_3;
		if ((!(((float)L_38) > ((float)(100.0f)))))
		{
			goto IL_0177;
		}
	}
	{
		// FullFood.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___FullFood_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
	}

IL_0177:
	{
		// if(petData.happy > 100)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_40 = __this->___petData_4;
		float L_41 = L_40->___happy_2;
		if ((!(((float)L_41) > ((float)(100.0f)))))
		{
			goto IL_0195;
		}
	}
	{
		// FullHappy.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___FullHappy_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
	}

IL_0195:
	{
		// }
		return;
	}
}
// System.Void JSONSaving::CreatePlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_CreatePlayerData_m35DEF87C7D25A4E15BC566E398BD024F3108DCF0 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// petData = new PetData("", 100f, 100f, 100f, 100f, 1, 2);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C*)il2cpp_codegen_object_new(PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var);
		PetData__ctor_mC264AA9E21D11A47CE7A98F20326C5D78816E72A(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (100.0f), (100.0f), (100.0f), (100.0f), 1, (2.0f), NULL);
		__this->___petData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petData_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void JSONSaving::SetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_SetPath_mEC4A1571DD111B5F06D032ABD7D8769A02B80712 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = Application.dataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, L_1, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, NULL);
		__this->___path_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_5), (void*)L_2);
		// persistenPath = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_4;
		L_4 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1), NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, L_4, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, NULL);
		__this->___persistenPath_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___persistenPath_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void JSONSaving::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_Update_mAAA5B390D691E2F9E003D7CA4D8B4B2DC4BA6A1A (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DayText.text = petData.days.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___DayText_19;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = __this->___petData_4;
		int32_t* L_2 = (&L_1->___days_5);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// FoodText.text = petData.food.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___FoodText_20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_5 = __this->___petData_4;
		float* L_6 = (&L_5->___food_1);
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// EngeryText.text = petData.energy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___EngeryText_21;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_9 = __this->___petData_4;
		float* L_10 = (&L_9->___energy_3);
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// HappyText.text = petData.happy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___HappyText_22;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_13 = __this->___petData_4;
		float* L_14 = (&L_13->___happy_2);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// HealthyText.text = petData.healthy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___HealthyText_23;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_17 = __this->___petData_4;
		float* L_18 = (&L_17->___healthy_4);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// MoneyText.text = petData.money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___MoneyText_24;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_21 = __this->___petData_4;
		float* L_22 = (&L_21->___money_6);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// FoodBarUpdate();
		JSONSaving_FoodBarUpdate_mF6D2A94B747D8027110C3B7DEE9DD1B2EF0F7F17(__this, NULL);
		// HappyBarUpdate();
		JSONSaving_HappyBarUpdate_m9333C5729893BD497331F876B4868892BA602920(__this, NULL);
		// HealthyBarUpdate();
		JSONSaving_HealthyBarUpdate_mC243FC62E03E60AA725E6EFC51B28611929D6E5E(__this, NULL);
		// EngeryBarUpdate();
		JSONSaving_EngeryBarUpdate_mF886507CBEA031F38AAB0E01C5FF5EC1D4C30EF9(__this, NULL);
		// if(petData.food <= 99)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_24 = __this->___petData_4;
		float L_25 = L_24->___food_1;
		if ((!(((float)L_25) <= ((float)(99.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		// FullFood.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___FullFood_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
	}

IL_00d8:
	{
		// if(petData.happy <= 99)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_27 = __this->___petData_4;
		float L_28 = L_27->___happy_2;
		if ((!(((float)L_28) <= ((float)(99.0f)))))
		{
			goto IL_00f6;
		}
	}
	{
		// FullHappy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___FullHappy_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
	}

IL_00f6:
	{
		// if(petData.days == 30)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_30 = __this->___petData_4;
		int32_t L_31 = L_30->___days_5;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_012b;
		}
	}
	{
		// petData.Re();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_32 = __this->___petData_4;
		PetData_Re_m3FEA5EB61FDEB37B72F7C231E42A07B6544ED2F0(L_32, NULL);
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// if(petData.days < 29)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_33 = __this->___petData_4;
		int32_t L_34 = L_33->___days_5;
		if ((((int32_t)L_34) >= ((int32_t)((int32_t)29))))
		{
			goto IL_012b;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_012b:
	{
		// if(petData.days == 1 || petData.energy >=64 )
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_35 = __this->___petData_4;
		int32_t L_36 = L_35->___days_5;
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			goto IL_014b;
		}
	}
	{
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_37 = __this->___petData_4;
		float L_38 = L_37->___energy_3;
		if ((!(((float)L_38) >= ((float)(64.0f)))))
		{
			goto IL_0159;
		}
	}

IL_014b:
	{
		// Day_bt.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___Day_bt_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		goto IL_0165;
	}

IL_0159:
	{
		// Day_bt.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___Day_bt_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
	}

IL_0165:
	{
		// if(petData.energy < 0)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_41 = __this->___petData_4;
		float L_42 = L_41->___energy_3;
		if ((!(((float)L_42) < ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// DayPlsu();
		JSONSaving_DayPlsu_mFE71B37FF35F846147DB52364A2FC7C3D52EB3EF(__this, NULL);
	}

IL_017d:
	{
		// if(petData.food >= 99)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_43 = __this->___petData_4;
		float L_44 = L_43->___food_1;
		if ((!(((float)L_44) >= ((float)(99.0f)))))
		{
			goto IL_019f;
		}
	}
	{
		// petData.food = 100;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_45 = __this->___petData_4;
		L_45->___food_1 = (100.0f);
	}

IL_019f:
	{
		// if(petData.happy >= 99)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_46 = __this->___petData_4;
		float L_47 = L_46->___happy_2;
		if ((!(((float)L_47) >= ((float)(99.0f)))))
		{
			goto IL_01c1;
		}
	}
	{
		// petData.happy = 100;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_48 = __this->___petData_4;
		L_48->___happy_2 = (100.0f);
	}

IL_01c1:
	{
		// if(petData.healthy <=0)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_49 = __this->___petData_4;
		float L_50 = L_49->___healthy_4;
		if ((!(((float)L_50) <= ((float)(0.0f)))))
		{
			goto IL_01ea;
		}
	}
	{
		// petData.Re();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_51 = __this->___petData_4;
		PetData_Re_m3FEA5EB61FDEB37B72F7C231E42A07B6544ED2F0(L_51, NULL);
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
	}

IL_01ea:
	{
		// }
		return;
	}
}
// System.Void JSONSaving::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF171540EAA45F76228FDAF5C957DDA8DCB61355);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_2 = NULL;
	{
		// string savePath = path;
		String_t* L_0 = __this->___path_5;
		V_0 = L_0;
		// Debug.Log("Saving Data at " + savePath);
		String_t* L_1 = V_0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDF171540EAA45F76228FDAF5C957DDA8DCB61355, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// string json = JsonUtility.ToJson(petData);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_3 = __this->___petData_4;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_3, NULL);
		V_1 = L_4;
		// Debug.Log(json);
		String_t* L_5 = V_1;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// using StreamWriter writer = new StreamWriter(savePath);
		String_t* L_6 = V_0;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_7 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m7C83908E2616C22FA632EF67E36E137932E534D7(L_7, L_6, NULL);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_8 = V_2;
					if (!L_8)
					{
						goto IL_004d;
					}
				}
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_9 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// writer.Write(json);
			StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_10 = V_2;
			String_t* L_11 = V_1;
			VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, L_11);
			// petData.SavePetData();
			PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_12 = __this->___petData_4;
			PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6(L_12, NULL);
			// }
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void JSONSaving::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_LoadData_m9C431965BDECD8C4119E4766BFFAB30C067393A6 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	{
		// using StreamReader reader = new StreamReader(path);
		String_t* L_0 = __this->___path_5;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0037;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// string json = reader.ReadToEnd();
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = V_0;
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_4);
			// PetData data = JsonUtility.FromJson<PetData>(json);
			PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_6;
			L_6 = JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20(L_5, JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20_RuntimeMethod_var);
			// Debug.Log(data.ToString());
			String_t* L_7;
			L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
			// petData.LoadPetData();
			PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_8 = __this->___petData_4;
			PetData_LoadPetData_m1A666E17C15DF7853C034DD4C183D4D2CB81AFC1(L_8, NULL);
			// }
			goto IL_0038;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void JSONSaving::LoadPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_LoadPlayerData_m1DA19903053C2DA55FD18B7D445947C91CA4030F (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (File.Exists(path))
		String_t* L_0 = __this->___path_5;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// string json = File.ReadAllText(path);
		String_t* L_2 = __this->___path_5;
		String_t* L_3;
		L_3 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_2, NULL);
		V_0 = L_3;
		// petData = JsonUtility.FromJson<PetData>(json);
		String_t* L_4 = V_0;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_5;
		L_5 = JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20(L_4, JsonUtility_FromJson_TisPetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_m779932CBBD101AAF1D0874EE7D858D7F76AF5F20_RuntimeMethod_var);
		__this->___petData_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petData_4), (void*)L_5);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void JSONSaving::DayPlsu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_DayPlsu_mFE71B37FF35F846147DB52364A2FC7C3D52EB3EF (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// petData.days += 1;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = L_0;
		int32_t L_2 = L_1->___days_5;
		L_1->___days_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// DayText.text = petData.days.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___DayText_19;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_4 = __this->___petData_4;
		int32_t* L_5 = (&L_4->___days_5);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// petData.energy =100;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_7 = __this->___petData_4;
		L_7->___energy_3 = (100.0f);
		// EngeryText.text = petData.energy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___EngeryText_21;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_9 = __this->___petData_4;
		float* L_10 = (&L_9->___energy_3);
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// if(petData.days %2 == 0 )
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_12 = __this->___petData_4;
		int32_t L_13 = L_12->___days_5;
		if (((int32_t)(L_13%2)))
		{
			goto IL_00cc;
		}
	}
	{
		// petData.food -=10;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_14 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_15 = L_14;
		float L_16 = L_15->___food_1;
		L_15->___food_1 = ((float)il2cpp_codegen_subtract(L_16, (10.0f)));
		// FoodText.text = petData.food.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___FoodText_20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_18 = __this->___petData_4;
		float* L_19 = (&L_18->___food_1);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// petData.happy -=10;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_21 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_22 = L_21;
		float L_23 = L_22->___happy_2;
		L_22->___happy_2 = ((float)il2cpp_codegen_subtract(L_23, (10.0f)));
		// HappyText.text = petData.happy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___HappyText_22;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_25 = __this->___petData_4;
		float* L_26 = (&L_25->___happy_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
	}

IL_00cc:
	{
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::NextScen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_NextScen_m7E4F2F5501D512726A4B080550C40E6C611FDB26 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// petData.Re();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		PetData_Re_m3FEA5EB61FDEB37B72F7C231E42A07B6544ED2F0(L_0, NULL);
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::NextScenMiniGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_NextScenMiniGame_mD84B2F5F01FF47C014161EC95B01025D82A6EB5D (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(4, NULL);
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::FoodStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_FoodStatus_m185A2AC74A7BDDFF8CCF3B003A71BA56752A4917 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// petData.food +=20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = L_0;
		float L_2 = L_1->___food_1;
		L_1->___food_1 = ((float)il2cpp_codegen_add(L_2, (20.0f)));
		// FoodText.text = petData.food.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___FoodText_20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_4 = __this->___petData_4;
		float* L_5 = (&L_4->___food_1);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// petData.energy -=36;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_7 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_8 = L_7;
		float L_9 = L_8->___energy_3;
		L_8->___energy_3 = ((float)il2cpp_codegen_subtract(L_9, (36.0f)));
		// EngeryText.text = petData.energy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___EngeryText_21;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_11 = __this->___petData_4;
		float* L_12 = (&L_11->___energy_3);
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// petData.happy -=10;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_14 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_15 = L_14;
		float L_16 = L_15->___happy_2;
		L_15->___happy_2 = ((float)il2cpp_codegen_subtract(L_16, (10.0f)));
		// HappyText.text = petData.happy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___HappyText_22;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_18 = __this->___petData_4;
		float* L_19 = (&L_18->___happy_2);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// petData.healthy -=8;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_21 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_22 = L_21;
		float L_23 = L_22->___healthy_4;
		L_22->___healthy_4 = ((float)il2cpp_codegen_subtract(L_23, (8.0f)));
		// HealthyText.text = petData.healthy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___HealthyText_23;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_25 = __this->___petData_4;
		float* L_26 = (&L_25->___healthy_4);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
		// if(petData.food >= 100)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_28 = __this->___petData_4;
		float L_29 = L_28->___food_1;
		if ((!(((float)L_29) >= ((float)(100.0f)))))
		{
			goto IL_00e6;
		}
	}
	{
		// FullFood.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___FullFood_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
	}

IL_00e6:
	{
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::HappyStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_HappyStatus_m902B2ACE5972905C45FCC70E5A9D7EC56C6F5829 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// petData.food -=10;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = L_0;
		float L_2 = L_1->___food_1;
		L_1->___food_1 = ((float)il2cpp_codegen_subtract(L_2, (10.0f)));
		// FoodText.text = petData.food.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___FoodText_20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_4 = __this->___petData_4;
		float* L_5 = (&L_4->___food_1);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// petData.energy -=36;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_7 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_8 = L_7;
		float L_9 = L_8->___energy_3;
		L_8->___energy_3 = ((float)il2cpp_codegen_subtract(L_9, (36.0f)));
		// EngeryText.text = petData.energy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___EngeryText_21;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_11 = __this->___petData_4;
		float* L_12 = (&L_11->___energy_3);
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// petData.happy +=20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_14 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_15 = L_14;
		float L_16 = L_15->___happy_2;
		L_15->___happy_2 = ((float)il2cpp_codegen_add(L_16, (20.0f)));
		// HappyText.text = petData.happy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___HappyText_22;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_18 = __this->___petData_4;
		float* L_19 = (&L_18->___happy_2);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// petData.healthy -=8;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_21 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_22 = L_21;
		float L_23 = L_22->___healthy_4;
		L_22->___healthy_4 = ((float)il2cpp_codegen_subtract(L_23, (8.0f)));
		// HealthyText.text = petData.healthy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___HealthyText_23;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_25 = __this->___petData_4;
		float* L_26 = (&L_25->___healthy_4);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
		// if(petData.happy >= 100)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_28 = __this->___petData_4;
		float L_29 = L_28->___happy_2;
		if ((!(((float)L_29) >= ((float)(100.0f)))))
		{
			goto IL_00e6;
		}
	}
	{
		// FullHappy.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___FullHappy_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
	}

IL_00e6:
	{
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::HealthyStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_HealthyStatus_mD052319713150766DF9BCEED7358966782F886A3 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5008F88A89E42251C54B63E71AF62B4FA3FF8CF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(petData.money >= 2)
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		float L_1 = L_0->___money_6;
		if ((!(((float)L_1) >= ((float)(2.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		// petData.healthy =100;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_2 = __this->___petData_4;
		L_2->___healthy_4 = (100.0f);
		// HealthyText.text = petData.healthy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___HealthyText_23;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_4 = __this->___petData_4;
		float* L_5 = (&L_4->___healthy_4);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// petData.money -=2;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_7 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_8 = L_7;
		float L_9 = L_8->___money_6;
		L_8->___money_6 = ((float)il2cpp_codegen_subtract(L_9, (2.0f)));
		// MoneyText.text = petData.money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___MoneyText_24;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_11 = __this->___petData_4;
		float* L_12 = (&L_11->___money_6);
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// petData.food -=20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_14 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_15 = L_14;
		float L_16 = L_15->___food_1;
		L_15->___food_1 = ((float)il2cpp_codegen_subtract(L_16, (20.0f)));
		// FoodText.text = petData.food.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___FoodText_20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_18 = __this->___petData_4;
		float* L_19 = (&L_18->___food_1);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// petData.happy -=20;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_21 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_22 = L_21;
		float L_23 = L_22->___happy_2;
		L_22->___happy_2 = ((float)il2cpp_codegen_subtract(L_23, (20.0f)));
		// HappyText.text = petData.happy.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___HappyText_22;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_25 = __this->___petData_4;
		float* L_26 = (&L_25->___happy_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
		goto IL_00e2;
	}

IL_00d8:
	{
		// Debug.Log("don't have Money!!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5008F88A89E42251C54B63E71AF62B4FA3FF8CF9, NULL);
	}

IL_00e2:
	{
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::AddMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_AddMoney_mFD710C8EB2582C2A396B0AC40EEBD648D48AC156 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// petData.money +=1;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = L_0;
		float L_2 = L_1->___money_6;
		L_1->___money_6 = ((float)il2cpp_codegen_add(L_2, (1.0f)));
		// MoneyText.text = petData.money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___MoneyText_24;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_4 = __this->___petData_4;
		float* L_5 = (&L_4->___money_6);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// SaveData();
		JSONSaving_SaveData_m2EB613CF8D92FEA21C5F4255345793312B62C21A(__this, NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::FoodBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_FoodBarUpdate_mF6D2A94B747D8027110C3B7DEE9DD1B2EF0F7F17 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// FoodBar.fillAmount = petData.food / 100.0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___FoodBar_25;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = __this->___petData_4;
		float L_2 = L_1->___food_1;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, ((float)(L_2/(100.0f))), NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::HappyBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_HappyBarUpdate_m9333C5729893BD497331F876B4868892BA602920 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// HappyBar.fillAmount = petData.happy / 100.0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___HappyBar_26;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = __this->___petData_4;
		float L_2 = L_1->___happy_2;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, ((float)(L_2/(100.0f))), NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::HealthyBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_HealthyBarUpdate_mC243FC62E03E60AA725E6EFC51B28611929D6E5E (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// HealthyBar.fillAmount = petData.healthy / 100.0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___HealthyBar_27;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = __this->___petData_4;
		float L_2 = L_1->___healthy_4;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, ((float)(L_2/(100.0f))), NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::EngeryBarUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving_EngeryBarUpdate_mF886507CBEA031F38AAB0E01C5FF5EC1D4C30EF9 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	{
		// EngeryBar.fillAmount = petData.energy / 100.0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___EngeryBar_28;
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_1 = __this->___petData_4;
		float L_2 = L_1->___energy_3;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, ((float)(L_2/(100.0f))), NULL);
		// }
		return;
	}
}
// System.Void JSONSaving::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONSaving__ctor_m8BDA17AFB52EC419080012A451D03D86E794F549 (JSONSaving_t1A329D4A425D5D7181CDB3C9B4470240CDCDBB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string path = "";
		__this->___path_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string persistenPath = "";
		__this->___persistenPath_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___persistenPath_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadSavePetDataNextScenes::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSavePetDataNextScenes_Start_mF505EBA99818DA2E9D0DB35EF5A3FEC99C73F0E5 (LoadSavePetDataNextScenes_t82469BBE999B6C27031712451EB5C6FF99F63A7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LoadSavePetDataNextScenes::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSavePetDataNextScenes_Update_mBC040A43A9D5DA98DA64AD63E2E48A84630EBF78 (LoadSavePetDataNextScenes_t82469BBE999B6C27031712451EB5C6FF99F63A7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// petData.LoadPetData();
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = __this->___petData_4;
		PetData_LoadPetData_m1A666E17C15DF7853C034DD4C183D4D2CB81AFC1(L_0, NULL);
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log(petData);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_2 = __this->___petData_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void LoadSavePetDataNextScenes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSavePetDataNextScenes__ctor_m86656188887F5153E032423A82FDCB17AC6C4B07 (LoadSavePetDataNextScenes_t82469BBE999B6C27031712451EB5C6FF99F63A7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PetData petData = new PetData("", 100f, 100f, 100f, 100f, 1, 2);
		PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* L_0 = (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C*)il2cpp_codegen_object_new(PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C_il2cpp_TypeInfo_var);
		PetData__ctor_mC264AA9E21D11A47CE7A98F20326C5D78816E72A(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (100.0f), (100.0f), (100.0f), (100.0f), 1, (2.0f), NULL);
		__this->___petData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petData_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PetData::.ctor(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData__ctor_mC264AA9E21D11A47CE7A98F20326C5D78816E72A (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, String_t* ___petName0, float ___food1, float ___happy2, float ___energy3, float ___healthy4, int32_t ___days5, float ___money6, const RuntimeMethod* method) 
{
	{
		// public PetData(string petName, float food, float happy, float energy,float healthy,int days,float money)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.petName = petName;
		String_t* L_0 = ___petName0;
		__this->___petName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petName_0), (void*)L_0);
		// this.food = food;
		float L_1 = ___food1;
		__this->___food_1 = L_1;
		// this.happy = happy;
		float L_2 = ___happy2;
		__this->___happy_2 = L_2;
		// this.energy = energy;
		float L_3 = ___energy3;
		__this->___energy_3 = L_3;
		// this.healthy = healthy;
		float L_4 = ___healthy4;
		__this->___healthy_4 = L_4;
		// this.days = days;
		int32_t L_5 = ___days5;
		__this->___days_5 = L_5;
		// this.money = money;
		float L_6 = ___money6;
		__this->___money_6 = L_6;
		// }
		return;
	}
}
// System.String PetData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PetData_ToString_mE272AE65853B4D6EBCA3A83BFD86441DCECEA06E (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B1A8DF2B3C565A2C46394B9EE3CC87C13A16010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2724C0488072E0CFB2B9D7854626B322933AD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral628F77E24A388599A60064419D86A89CF1833299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C6E36B910614E9E0913A71619BB791C2A48B12C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB160FF34A760944CC7793F560E7023DF6023090B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Pet Name: " + petName + " Food: " + food + " Happy: " + happy + " Energy: " + energy + " Healthy: " + healthy +" Days: " + days + "Money" + money;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral628F77E24A388599A60064419D86A89CF1833299);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628F77E24A388599A60064419D86A89CF1833299);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = __this->___petName_0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		ArrayElementTypeCheck (L_4, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		float* L_6 = (&__this->___food_1);
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_6, NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral5B1A8DF2B3C565A2C46394B9EE3CC87C13A16010);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5B1A8DF2B3C565A2C46394B9EE3CC87C13A16010);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		float* L_10 = (&__this->___happy_2);
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_10, NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		ArrayElementTypeCheck (L_12, _stringLiteral5F2724C0488072E0CFB2B9D7854626B322933AD5);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral5F2724C0488072E0CFB2B9D7854626B322933AD5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		float* L_14 = (&__this->___energy_3);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		ArrayElementTypeCheck (L_16, _stringLiteralB160FF34A760944CC7793F560E7023DF6023090B);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB160FF34A760944CC7793F560E7023DF6023090B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		float* L_18 = (&__this->___healthy_4);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		ArrayElementTypeCheck (L_20, _stringLiteral6C6E36B910614E9E0913A71619BB791C2A48B12C);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral6C6E36B910614E9E0913A71619BB791C2A48B12C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		int32_t* L_22 = (&__this->___days_5);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_22, NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		ArrayElementTypeCheck (L_24, _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		float* L_26 = (&__this->___money_6);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_27);
		String_t* L_28;
		L_28 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
		return L_28;
	}
}
// System.Void PetData::SavePetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_SavePetData_mCE03C1075C90900CCD8FC79AF779680BB335D7C6 (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("PetName", petName);
		String_t* L_0 = __this->___petName_0;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE, L_0, NULL);
		// PlayerPrefs.SetFloat("Food", food);
		float L_1 = __this->___food_1;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, L_1, NULL);
		// PlayerPrefs.SetFloat("Happy", happy);
		float L_2 = __this->___happy_2;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, L_2, NULL);
		// PlayerPrefs.SetFloat("Energy", energy);
		float L_3 = __this->___energy_3;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, L_3, NULL);
		// PlayerPrefs.SetFloat("Healthy",healthy);
		float L_4 = __this->___healthy_4;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82, L_4, NULL);
		// PlayerPrefs.SetInt("Days", days);
		int32_t L_5 = __this->___days_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2, L_5, NULL);
		// PlayerPrefs.SetFloat("Money",money);
		float L_6 = __this->___money_6;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, L_6, NULL);
		// }
		return;
	}
}
// System.Void PetData::LoadPetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_LoadPetData_m1A666E17C15DF7853C034DD4C183D4D2CB81AFC1 (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// petName = PlayerPrefs.GetString("PetName");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE, NULL);
		__this->___petName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petName_0), (void*)L_0);
		// food = PlayerPrefs.GetFloat("Food");
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, NULL);
		__this->___food_1 = L_1;
		// happy = PlayerPrefs.GetFloat("Happy");
		float L_2;
		L_2 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, NULL);
		__this->___happy_2 = L_2;
		// energy = PlayerPrefs.GetFloat("Energy");
		float L_3;
		L_3 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, NULL);
		__this->___energy_3 = L_3;
		// healthy = PlayerPrefs.GetFloat("Healthy");
		float L_4;
		L_4 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82, NULL);
		__this->___healthy_4 = L_4;
		// days = PlayerPrefs.GetInt("Days");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2, NULL);
		__this->___days_5 = L_5;
		// money = PlayerPrefs.GetFloat("Money");
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, NULL);
		__this->___money_6 = L_6;
		// }
		return;
	}
}
// System.Void PetData::DeletePetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_DeletePetData_mEC576E6FD6156283961BE5FDCFC234C124A9604C (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.DeleteKey("PetName");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral3B742447A7EE2B2C5D1C328D34FFA96C468C28FE, NULL);
		// PlayerPrefs.DeleteKey("Food");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, NULL);
		// PlayerPrefs.DeleteKey("Happy");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, NULL);
		// PlayerPrefs.DeleteKey("Energy");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral85B675D0F3802079E4DA5CF1661721E06C4EAE4D, NULL);
		// PlayerPrefs.DeleteKey("Healthy");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteralC3B7F16E3532982C5B52BD93B529ABE0A8DFFD82, NULL);
		// PlayerPrefs.DeleteKey("Days");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteralB10F04D9414BC26C20649572F5E0D5CAF38C1CF2, NULL);
		// PlayerPrefs.DeleteKey("Money");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, NULL);
		// }
		return;
	}
}
// System.Void PetData::Re()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PetData_Re_m3FEA5EB61FDEB37B72F7C231E42A07B6544ED2F0 (PetData_tE1EE3E1C29B651CEC87F5586350257573F6B8E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// petName = " ";
		__this->___petName_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petName_0), (void*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		// food = Random.Range(50,100);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)50), ((int32_t)100), NULL);
		__this->___food_1 = ((float)L_0);
		// energy = Random.Range(50,100);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)50), ((int32_t)100), NULL);
		__this->___energy_3 = ((float)L_1);
		// happy = Random.Range(50,100);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)50), ((int32_t)100), NULL);
		__this->___happy_2 = ((float)L_2);
		// healthy = Random.Range(50,100);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)50), ((int32_t)100), NULL);
		__this->___healthy_4 = ((float)L_3);
		// days = 1;
		__this->___days_5 = 1;
		// money = 2;
		__this->___money_6 = (2.0f);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StatusHunger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusHunger_Start_m4E7767B4A33D894DA7EBA8B291204DD380EEFFEC (StatusHunger_t4B002C7D731B280C34A2495A4AFB36862AF2675D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77C435909975B85C089BB39F3212D644DD87C7F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("LowerHealth", 1.0f, 5.0f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral77C435909975B85C089BB39F3212D644DD87C7F0, (1.0f), (5.0f), NULL);
		// }
		return;
	}
}
// System.Void StatusHunger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusHunger_Update_m78873BBA41D9DA0C9FF7C44E72E581377C78EB9E (StatusHunger_t4B002C7D731B280C34A2495A4AFB36862AF2675D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StatusHunger::LowerHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusHunger_LowerHealth_m3D61B3585280AB15A99C206274811F04F132A2ED (StatusHunger_t4B002C7D731B280C34A2495A4AFB36862AF2675D* __this, const RuntimeMethod* method) 
{
	{
		// day++;
		int32_t L_0 = __this->___day_7;
		__this->___day_7 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// food -= 5;
		int32_t L_1 = __this->___food_4;
		__this->___food_4 = ((int32_t)il2cpp_codegen_subtract(L_1, 5));
		// happy -= 5;
		int32_t L_2 = __this->___happy_5;
		__this->___happy_5 = ((int32_t)il2cpp_codegen_subtract(L_2, 5));
		// energys -= 5;
		int32_t L_3 = __this->___energys_6;
		__this->___energys_6 = ((int32_t)il2cpp_codegen_subtract(L_3, 5));
		// }
		return;
	}
}
// System.Void StatusHunger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusHunger__ctor_mBAFD93AB5530F56E24EA3C5FC45CBA5BB057B1E2 (StatusHunger_t4B002C7D731B280C34A2495A4AFB36862AF2675D* __this, const RuntimeMethod* method) 
{
	{
		// public int food, happy, energys = 100;
		__this->___energys_6 = ((int32_t)100);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayAudio::DropAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_DropAudio_mE49DDE4AB8AEA4BCA53225774B99F634C79EF430 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(audioObj , transform.position , transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___audioObj_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio__ctor_mFB4A06CE9F21D57E725F284B2C55494834E2B421 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!PlayerPrefs.HasKey("selectedOption"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// selectedOption =0;
		__this->___selectedOption_6 = 0;
		goto IL_001b;
	}

IL_0015:
	{
		// Load();
		Player_Load_m7378D7209D36BDF92654D3A95A8AEA2D94C8CAFB(__this, NULL);
	}

IL_001b:
	{
		// UpdateCharacter(selectedOption);
		int32_t L_1 = __this->___selectedOption_6;
		Player_UpdateCharacter_m7A06BE10B6210846520070ADFE9D201D2B7D18A5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::UpdateCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_UpdateCharacter_m7A06BE10B6210846520070ADFE9D201D2B7D18A5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___selectedOption0, const RuntimeMethod* method) 
{
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_0 = NULL;
	{
		// Character character = characterDB.GetCharacter(selectedOption);
		Characterdatabase_tD9434C0541898114454453348C8072BF96407BAF* L_0 = __this->___characterDB_4;
		int32_t L_1 = ___selectedOption0;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_2;
		L_2 = Characterdatabase_GetCharacter_mA37CF4251C87F269028D8391DD741E485DB9E713(L_0, L_1, NULL);
		V_0 = L_2;
		// artworkSprite.sprite = character.characterSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___artworkSprite_5;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_4 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = L_4->___characterSprite_1;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Load_m7378D7209D36BDF92654D3A95A8AEA2D94C8CAFB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedOption = PlayerPrefs.GetInt("selectedOption");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralE4D93292912069F87F15D1FE99FD1BA77EA7D58A, NULL);
		__this->___selectedOption_6 = L_0;
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_Update_m30B68B087B963C89D4E284E032A980DABDAEB753 (Scroller_tE9ACC7A8D6D9C55273974DCDA16ACCCDB8D6F206* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _img.uvRect = new Rect(_img.uvRect.position + new Vector2(_x, _y) * Time.deltaTime, _img.uvRect.size);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->____img_4;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = __this->____img_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline(L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&V_0), NULL);
		float L_4 = __this->____x_5;
		float L_5 = __this->____y_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_8, NULL);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_10 = __this->____img_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline(L_10, NULL);
		V_0 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_13), L_9, L_12, /*hidden argument*/NULL);
		RawImage_set_uvRect_m9DF6BBBC6AC46F7F3290A220ED6F076CAB4BC52F(L_0, L_13, NULL);
		// }
		return;
	}
}
// System.Void Scroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller__ctor_m248C79CD435F4A786C189D2A8E1545E9038E647F (Scroller_tE9ACC7A8D6D9C55273974DCDA16ACCCDB8D6F206* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) 
{
	{
		// return m_UVRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___m_UVRect_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
