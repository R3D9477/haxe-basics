// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_assets_AssetPlugin
#include <haxe/ui/assets/AssetPlugin.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_CallbackMap
#include <haxe/ui/util/CallbackMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0397d73654d5d7af_12_new,"haxe.ui.ToolkitAssets","new",0x0bdf55e1,"haxe.ui.ToolkitAssets.new","haxe/ui/ToolkitAssets.hx",12,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_39_getFont,"haxe.ui.ToolkitAssets","getFont",0xd525e786,"haxe.ui.ToolkitAssets.getFont","haxe/ui/ToolkitAssets.hx",39,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_51_getFont,"haxe.ui.ToolkitAssets","getFont",0xd525e786,"haxe.ui.ToolkitAssets.getFont","haxe/ui/ToolkitAssets.hx",51,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_64__onFontLoaded,"haxe.ui.ToolkitAssets","_onFontLoaded",0x4c8ce4d3,"haxe.ui.ToolkitAssets._onFontLoaded","haxe/ui/ToolkitAssets.hx",64,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_72_getImage,"haxe.ui.ToolkitAssets","getImage",0x64dc15c4,"haxe.ui.ToolkitAssets.getImage","haxe/ui/ToolkitAssets.hx",72,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_86_getImage,"haxe.ui.ToolkitAssets","getImage",0x64dc15c4,"haxe.ui.ToolkitAssets.getImage","haxe/ui/ToolkitAssets.hx",86,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_103__onImageLoaded,"haxe.ui.ToolkitAssets","_onImageLoaded",0x31aa3741,"haxe.ui.ToolkitAssets._onImageLoaded","haxe/ui/ToolkitAssets.hx",103,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_115_getText,"haxe.ui.ToolkitAssets","getText",0xde5f5664,"haxe.ui.ToolkitAssets.getText","haxe/ui/ToolkitAssets.hx",115,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_124_getBytes,"haxe.ui.ToolkitAssets","getBytes",0x650afed4,"haxe.ui.ToolkitAssets.getBytes","haxe/ui/ToolkitAssets.hx",124,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_131_addPlugin,"haxe.ui.ToolkitAssets","addPlugin",0x5dd5dbf5,"haxe.ui.ToolkitAssets.addPlugin","haxe/ui/ToolkitAssets.hx",131,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_138_runPlugins,"haxe.ui.ToolkitAssets","runPlugins",0xc03cfef4,"haxe.ui.ToolkitAssets.runPlugins","haxe/ui/ToolkitAssets.hx",138,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_15_get_instance,"haxe.ui.ToolkitAssets","get_instance",0x4fdd15fd,"haxe.ui.ToolkitAssets.get_instance","haxe/ui/ToolkitAssets.hx",15,0x8586374f)
namespace haxe{
namespace ui{

void ToolkitAssets_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_12_new)
HXLINE(  27)		this->options = null();
HXLINE(  25)		this->preloadList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		super::__construct();
            	}

Dynamic ToolkitAssets_obj::__CreateEmpty() { return new ToolkitAssets_obj; }

void *ToolkitAssets_obj::_hx_vtable = 0;

Dynamic ToolkitAssets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ToolkitAssets_obj > _hx_result = new ToolkitAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolkitAssets_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x021ff223) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x021ff223;
	} else {
		return inClassId==(int)0x0d657426;
	}
}

void ToolkitAssets_obj::getFont(::String resourceId, ::Dynamic callback,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_39_getFont)
HXDLIN(  39)		 ::haxe::ui::ToolkitAssets _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		bool _hx_tmp1;
HXDLIN(  40)		if (hx::IsNotNull( this->_fontCache )) {
HXLINE(  40)			_hx_tmp1 = hx::IsNotNull( this->_fontCache->get(resourceId) );
            		}
            		else {
HXLINE(  40)			_hx_tmp1 = false;
            		}
HXDLIN(  40)		if (_hx_tmp1) {
HXLINE(  40)			_hx_tmp = (useCache == true);
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			 ::Dynamic _hx_tmp2 = this->_fontCache->get(resourceId);
HXDLIN(  41)			callback(_hx_tmp2);
            		}
            		else {
HXLINE(  43)			if (hx::IsNull( this->_fontCallbacks )) {
HXLINE(  44)				this->_fontCallbacks =  ::haxe::ui::util::CallbackMap_obj::__alloc( HX_CTX );
            			}
HXLINE(  47)			this->_fontCallbacks->add(resourceId,callback);
HXLINE(  49)			if ((this->_fontCallbacks->count(resourceId) == (int)1)) {
            				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::ToolkitAssets,_gthis,::String,resourceId, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::Dynamic font){
            					HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_51_getFont)
HXLINE(  51)					if (hx::IsNotNull( font )) {
HXLINE(  52)						_gthis->_onFontLoaded(resourceId,font);
            					}
            					else {
HXLINE(  53)						if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != (int)-1)) {
HXLINE(  54)							_gthis->getFontFromHaxeResource(resourceId,_gthis->_onFontLoaded_dyn());
            						}
            						else {
HXLINE(  56)							_gthis->_fontCallbacks->remove(resourceId,callback);
HXLINE(  57)							callback(null());
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  50)				this->getFontInternal(resourceId, ::Dynamic(new _hx_Closure_0(_gthis,resourceId,callback)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ToolkitAssets_obj,getFont,(void))

void ToolkitAssets_obj::_onFontLoaded(::String resourceId, ::Dynamic font){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_64__onFontLoaded)
HXLINE(  65)		if (hx::IsNull( this->_fontCache )) {
HXLINE(  66)			this->_fontCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  68)		this->_fontCache->set(resourceId,font);
HXLINE(  69)		this->_fontCallbacks->invokeAndRemove(resourceId,font);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolkitAssets_obj,_onFontLoaded,(void))

void ToolkitAssets_obj::getImage(::String resourceId, ::Dynamic callback,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_72_getImage)
HXDLIN(  72)		 ::haxe::ui::ToolkitAssets _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  73)		::String orginalResourceId = resourceId;
HXLINE(  74)		resourceId = ( (::String)(this->runPlugins(resourceId)) );
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		bool _hx_tmp1;
HXDLIN(  75)		if (hx::IsNotNull( this->_imageCache )) {
HXLINE(  75)			_hx_tmp1 = hx::IsNotNull( this->_imageCache->get(resourceId) );
            		}
            		else {
HXLINE(  75)			_hx_tmp1 = false;
            		}
HXDLIN(  75)		if (_hx_tmp1) {
HXLINE(  75)			_hx_tmp = (useCache == true);
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  76)			 ::Dynamic _hx_tmp2 = this->_imageCache->get(resourceId);
HXDLIN(  76)			callback(_hx_tmp2);
            		}
            		else {
HXLINE(  78)			if (hx::IsNull( this->_imageCallbacks )) {
HXLINE(  79)				this->_imageCallbacks =  ::haxe::ui::util::CallbackMap_obj::__alloc( HX_CTX );
            			}
HXLINE(  82)			this->_imageCallbacks->add(resourceId,callback);
HXLINE(  84)			if ((this->_imageCallbacks->count(resourceId) == (int)1)) {
            				HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::ToolkitAssets,_gthis,::String,orginalResourceId,::String,resourceId, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::Dynamic imageInfo){
            					HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_86_getImage)
HXLINE(  86)					if (hx::IsNotNull( imageInfo )) {
HXLINE(  87)						_gthis->_onImageLoaded(resourceId,imageInfo);
            					}
            					else {
HXLINE(  88)						if ((::haxe::Resource_obj::listNames()->indexOf(orginalResourceId,null()) != (int)-1)) {
HXLINE(  89)							_gthis->_imageCallbacks->remove(resourceId,callback);
HXLINE(  90)							_gthis->_imageCallbacks->add(orginalResourceId,callback);
HXLINE(  91)							_gthis->getImageFromHaxeResource(orginalResourceId,_gthis->_onImageLoaded_dyn());
            						}
            						else {
HXLINE(  92)							if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != (int)-1)) {
HXLINE(  93)								_gthis->getImageFromHaxeResource(resourceId,_gthis->_onImageLoaded_dyn());
            							}
            							else {
HXLINE(  95)								_gthis->_imageCallbacks->remove(resourceId,callback);
HXLINE(  96)								callback(null());
            							}
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  85)				this->getImageInternal(resourceId, ::Dynamic(new _hx_Closure_0(_gthis,orginalResourceId,resourceId,callback)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ToolkitAssets_obj,getImage,(void))

void ToolkitAssets_obj::_onImageLoaded(::String resourceId, ::Dynamic imageInfo){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_103__onImageLoaded)
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if (hx::IsNotNull( imageInfo )) {
HXLINE( 104)			if ((( (int)(imageInfo->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)) ) != (int)-1)) {
HXLINE( 104)				_hx_tmp = (( (int)(imageInfo->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)) ) == (int)-1);
            			}
            			else {
HXLINE( 104)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 105)			::haxe::Log_obj::trace(HX_("WARNING: imageData.originalWidth == -1 || imageData.originalHeight == -1",d3,d8,e4,8c),hx::SourceInfo(HX_("ToolkitAssets.hx",9d,c9,05,ab),105,HX_("haxe.ui.ToolkitAssets",6f,d1,6c,9e),HX_("_onImageLoaded",22,5f,eb,41)));
            		}
HXLINE( 108)		if (hx::IsNull( this->_imageCache )) {
HXLINE( 109)			this->_imageCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 111)		this->_imageCache->set(resourceId,imageInfo);
HXLINE( 112)		this->_imageCallbacks->invokeAndRemove(resourceId,imageInfo);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolkitAssets_obj,_onImageLoaded,(void))

::String ToolkitAssets_obj::getText(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_115_getText)
HXLINE( 116)		::String s = this->getTextDelegate(resourceId);
HXLINE( 117)		if (hx::IsNull( s )) {
HXLINE( 118)			s = ::haxe::Resource_obj::getString(resourceId);
            		}
HXLINE( 120)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,getText,return )

 ::haxe::io::Bytes ToolkitAssets_obj::getBytes( ::Dynamic resourceId){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_124_getBytes)
HXDLIN( 124)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,getBytes,return )

void ToolkitAssets_obj::addPlugin( ::haxe::ui::assets::AssetPlugin plugin){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_131_addPlugin)
HXLINE( 132)		if (hx::IsNull( this->_plugins )) {
HXLINE( 133)			this->_plugins = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 135)		this->_plugins->push(plugin);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,addPlugin,(void))

 ::Dynamic ToolkitAssets_obj::runPlugins( ::Dynamic asset){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_138_runPlugins)
HXLINE( 139)		if (hx::IsNull( this->_plugins )) {
HXLINE( 140)			return asset;
            		}
HXLINE( 143)		{
HXLINE( 143)			int _g = (int)0;
HXDLIN( 143)			::Array< ::Dynamic> _g1 = this->_plugins;
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				 ::haxe::ui::assets::AssetPlugin p = _g1->__get(_g).StaticCast<  ::haxe::ui::assets::AssetPlugin >();
HXDLIN( 143)				_g = (_g + (int)1);
HXLINE( 144)				asset = p->invoke(asset);
            			}
            		}
HXLINE( 147)		return asset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,runPlugins,return )

 ::haxe::ui::ToolkitAssets ToolkitAssets_obj::_instance;

 ::haxe::ui::ToolkitAssets ToolkitAssets_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_15_get_instance)
HXLINE(  16)		if (hx::IsNull( ::haxe::ui::ToolkitAssets_obj::_instance )) {
HXLINE(  17)			::haxe::ui::ToolkitAssets_obj::_instance =  ::haxe::ui::ToolkitAssets_obj::__alloc( HX_CTX );
            		}
HXLINE(  19)		return ::haxe::ui::ToolkitAssets_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolkitAssets_obj,get_instance,return )


hx::ObjectPtr< ToolkitAssets_obj > ToolkitAssets_obj::__new() {
	hx::ObjectPtr< ToolkitAssets_obj > __this = new ToolkitAssets_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ToolkitAssets_obj > ToolkitAssets_obj::__alloc(hx::Ctx *_hx_ctx) {
	ToolkitAssets_obj *__this = (ToolkitAssets_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ToolkitAssets_obj), true, "haxe.ui.ToolkitAssets"));
	*(void **)__this = ToolkitAssets_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolkitAssets_obj::ToolkitAssets_obj()
{
}

void ToolkitAssets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolkitAssets);
	HX_MARK_MEMBER_NAME(preloadList,"preloadList");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(_fontCache,"_fontCache");
	HX_MARK_MEMBER_NAME(_fontCallbacks,"_fontCallbacks");
	HX_MARK_MEMBER_NAME(_imageCache,"_imageCache");
	HX_MARK_MEMBER_NAME(_imageCallbacks,"_imageCallbacks");
	HX_MARK_MEMBER_NAME(_plugins,"_plugins");
	HX_MARK_END_CLASS();
}

void ToolkitAssets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(preloadList,"preloadList");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(_fontCache,"_fontCache");
	HX_VISIT_MEMBER_NAME(_fontCallbacks,"_fontCallbacks");
	HX_VISIT_MEMBER_NAME(_imageCache,"_imageCache");
	HX_VISIT_MEMBER_NAME(_imageCallbacks,"_imageCallbacks");
	HX_VISIT_MEMBER_NAME(_plugins,"_plugins");
}

hx::Val ToolkitAssets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return hx::Val( getText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getImage") ) { return hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"_plugins") ) { return hx::Val( _plugins ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addPlugin") ) { return hx::Val( addPlugin_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fontCache") ) { return hx::Val( _fontCache ); }
		if (HX_FIELD_EQ(inName,"runPlugins") ) { return hx::Val( runPlugins_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preloadList") ) { return hx::Val( preloadList ); }
		if (HX_FIELD_EQ(inName,"_imageCache") ) { return hx::Val( _imageCache ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onFontLoaded") ) { return hx::Val( _onFontLoaded_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fontCallbacks") ) { return hx::Val( _fontCallbacks ); }
		if (HX_FIELD_EQ(inName,"_onImageLoaded") ) { return hx::Val( _onImageLoaded_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_imageCallbacks") ) { return hx::Val( _imageCallbacks ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ToolkitAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

hx::Val ToolkitAssets_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_plugins") ) { _plugins=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fontCache") ) { _fontCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preloadList") ) { preloadList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageCache") ) { _imageCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fontCallbacks") ) { _fontCallbacks=inValue.Cast<  ::haxe::ui::util::CallbackMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_imageCallbacks") ) { _imageCallbacks=inValue.Cast<  ::haxe::ui::util::CallbackMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ToolkitAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::ToolkitAssets >(); return true; }
	}
	return false;
}

void ToolkitAssets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("preloadList","\xc7","\xa8","\x09","\xf4"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("_fontCache","\xb4","\xb9","\x92","\x48"));
	outFields->push(HX_HCSTRING("_fontCallbacks","\x80","\xb3","\xe7","\x54"));
	outFields->push(HX_HCSTRING("_imageCache","\x06","\x2e","\x6c","\x1f"));
	outFields->push(HX_HCSTRING("_imageCallbacks","\xd2","\xb8","\x66","\xbe"));
	outFields->push(HX_HCSTRING("_plugins","\xe1","\x2b","\xee","\x3b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ToolkitAssets_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ToolkitAssets_obj,preloadList),HX_HCSTRING("preloadList","\xc7","\xa8","\x09","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ToolkitAssets_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ToolkitAssets_obj,_fontCache),HX_HCSTRING("_fontCache","\xb4","\xb9","\x92","\x48")},
	{hx::fsObject /*::haxe::ui::util::CallbackMap*/ ,(int)offsetof(ToolkitAssets_obj,_fontCallbacks),HX_HCSTRING("_fontCallbacks","\x80","\xb3","\xe7","\x54")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ToolkitAssets_obj,_imageCache),HX_HCSTRING("_imageCache","\x06","\x2e","\x6c","\x1f")},
	{hx::fsObject /*::haxe::ui::util::CallbackMap*/ ,(int)offsetof(ToolkitAssets_obj,_imageCallbacks),HX_HCSTRING("_imageCallbacks","\xd2","\xb8","\x66","\xbe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ToolkitAssets_obj,_plugins),HX_HCSTRING("_plugins","\xe1","\x2b","\xee","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ToolkitAssets_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::ToolkitAssets*/ ,(void *) &ToolkitAssets_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ToolkitAssets_obj_sMemberFields[] = {
	HX_HCSTRING("preloadList","\xc7","\xa8","\x09","\xf4"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("_fontCache","\xb4","\xb9","\x92","\x48"),
	HX_HCSTRING("_fontCallbacks","\x80","\xb3","\xe7","\x54"),
	HX_HCSTRING("_imageCache","\x06","\x2e","\x6c","\x1f"),
	HX_HCSTRING("_imageCallbacks","\xd2","\xb8","\x66","\xbe"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("_onFontLoaded","\x12","\x14","\x75","\xc7"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("_onImageLoaded","\x22","\x5f","\xeb","\x41"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("_plugins","\xe1","\x2b","\xee","\x3b"),
	HX_HCSTRING("addPlugin","\xb4","\xbf","\x07","\xfd"),
	HX_HCSTRING("runPlugins","\x55","\x62","\xb2","\x6c"),
	::String(null()) };

static void ToolkitAssets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolkitAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ToolkitAssets_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolkitAssets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolkitAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ToolkitAssets_obj::_instance,"_instance");
};

#endif

hx::Class ToolkitAssets_obj::__mClass;

static ::String ToolkitAssets_obj_sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null())
};

void ToolkitAssets_obj::__register()
{
	hx::Object *dummy = new ToolkitAssets_obj;
	ToolkitAssets_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.ToolkitAssets","\x6f","\xd1","\x6c","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolkitAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &ToolkitAssets_obj::__SetStatic;
	__mClass->mMarkFunc = ToolkitAssets_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ToolkitAssets_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ToolkitAssets_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ToolkitAssets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolkitAssets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolkitAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolkitAssets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
