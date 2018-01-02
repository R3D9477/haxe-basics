// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationComponentRef
#include <haxe/ui/animation/AnimationComponentRef.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationKeyFrame
#include <haxe/ui/animation/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0219bc876b904c65_18_new,"haxe.ui.animation.Animation","new",0xe8ec4a1a,"haxe.ui.animation.Animation.new","haxe/ui/animation/Animation.hx",18,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_36_set_easingString,"haxe.ui.animation.Animation","set_easingString",0x91788fdf,"haxe.ui.animation.Animation.set_easingString","haxe/ui/animation/Animation.hx",36,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_41_addKeyFrame,"haxe.ui.animation.Animation","addKeyFrame",0x1ae91909,"haxe.ui.animation.Animation.addKeyFrame","haxe/ui/animation/Animation.hx",41,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_49_setComponent,"haxe.ui.animation.Animation","setComponent",0x60cf2fc1,"haxe.ui.animation.Animation.setComponent","haxe/ui/animation/Animation.hx",49,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_53_getComponent,"haxe.ui.animation.Animation","getComponent",0x4bd60c4d,"haxe.ui.animation.Animation.getComponent","haxe/ui/animation/Animation.hx",53,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_59_start,"haxe.ui.animation.Animation","start",0x1f01509c,"haxe.ui.animation.Animation.start","haxe/ui/animation/Animation.hx",59,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_72_runFrame,"haxe.ui.animation.Animation","runFrame",0x8c2ab4e8,"haxe.ui.animation.Animation.runFrame","haxe/ui/animation/Animation.hx",72,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_68_runFrame,"haxe.ui.animation.Animation","runFrame",0x8c2ab4e8,"haxe.ui.animation.Animation.runFrame","haxe/ui/animation/Animation.hx",68,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_78_nextFrame,"haxe.ui.animation.Animation","nextFrame",0xf41a1374,"haxe.ui.animation.Animation.nextFrame","haxe/ui/animation/Animation.hx",78,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_95_complete,"haxe.ui.animation.Animation","complete",0xfd3a04bf,"haxe.ui.animation.Animation.complete","haxe/ui/animation/Animation.hx",95,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_104_loop,"haxe.ui.animation.Animation","loop",0xe489af6a,"haxe.ui.animation.Animation.loop","haxe/ui/animation/Animation.hx",104,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_111_stop,"haxe.ui.animation.Animation","stop",0xe92df908,"haxe.ui.animation.Animation.stop","haxe/ui/animation/Animation.hx",111,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_119_fromXML,"haxe.ui.animation.Animation","fromXML",0x01570147,"haxe.ui.animation.Animation.fromXML","haxe/ui/animation/Animation.hx",119,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_141_setVar,"haxe.ui.animation.Animation","setVar",0x6b9c42eb,"haxe.ui.animation.Animation.setVar","haxe/ui/animation/Animation.hx",141,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_144_clone,"haxe.ui.animation.Animation","clone",0xe358ef97,"haxe.ui.animation.Animation.clone","haxe/ui/animation/Animation.hx",144,0x284fa2b7)
HX_LOCAL_STACK_FRAME(_hx_pos_0219bc876b904c65_182_easingFromString,"haxe.ui.animation.Animation","easingFromString",0x74c99c6c,"haxe.ui.animation.Animation.easingFromString","haxe/ui/animation/Animation.hx",182,0x284fa2b7)
namespace haxe{
namespace ui{
namespace animation{

void Animation_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0219bc876b904c65_18_new)
HXLINE( 139)		this->vars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 110)		this->_stopped = false;
HXLINE(  93)		this->_loop = false;
HXLINE(  91)		this->looping = false;
HXLINE(  57)		this->_currentFrameIndex = (int)0;
HXLINE(  56)		this->_currentTime = (int)0;
HXLINE(  25)		this->easing = null();
HXLINE(  20)		this->componentMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  19)		this->keyFrames = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Animation_obj::__CreateEmpty() { return new Animation_obj; }

void *Animation_obj::_hx_vtable = 0;

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Animation_obj > _hx_result = new Animation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Animation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2481e0e2;
}

::String Animation_obj::set_easingString(::String value){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_36_set_easingString)
HXLINE(  37)		this->easing = ::haxe::ui::animation::Animation_obj::easingFromString(value);
HXLINE(  38)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,set_easingString,return )

 ::haxe::ui::animation::AnimationKeyFrame Animation_obj::addKeyFrame(int time){
            	HX_GC_STACKFRAME(&_hx_pos_0219bc876b904c65_41_addKeyFrame)
HXLINE(  42)		 ::haxe::ui::animation::AnimationKeyFrame keyFrame =  ::haxe::ui::animation::AnimationKeyFrame_obj::__alloc( HX_CTX ,time);
HXLINE(  43)		keyFrame->animation = hx::ObjectPtr<OBJ_>(this);
HXLINE(  44)		this->keyFrames->push(keyFrame);
HXLINE(  45)		return keyFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,addKeyFrame,return )

void Animation_obj::setComponent(::String id, ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_49_setComponent)
HXDLIN(  49)		this->componentMap->set(id,component);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,setComponent,(void))

 ::haxe::ui::core::Component Animation_obj::getComponent(::String id){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_53_getComponent)
HXDLIN(  53)		return this->componentMap->get(id).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,getComponent,return )

void Animation_obj::start( ::Dynamic complete){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_59_start)
HXLINE(  60)		this->_complete = complete;
HXLINE(  61)		this->_stopped = false;
HXLINE(  62)		this->_currentTime = (int)0;
HXLINE(  63)		this->_currentFrameIndex = (int)0;
HXLINE(  64)		this->_currentKeyFrame = null();
HXLINE(  65)		this->runFrame(this->_currentFrameIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,start,(void))

void Animation_obj::runFrame(int index){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::animation::Animation,_gthis, ::haxe::ui::animation::AnimationKeyFrame,f) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_0219bc876b904c65_72_runFrame)
HXLINE(  73)			_gthis->_currentTime = f->time;
HXLINE(  74)			_gthis->nextFrame();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_68_runFrame)
HXDLIN(  68)		 ::haxe::ui::animation::Animation _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  69)		 ::haxe::ui::animation::AnimationKeyFrame f = this->keyFrames->__get(index).StaticCast<  ::haxe::ui::animation::AnimationKeyFrame >();
HXLINE(  70)		this->_currentKeyFrame = f;
HXLINE(  71)		Float duration = (f->time - this->_currentTime);
HXLINE(  72)		f->run(duration, ::Dynamic(new _hx_Closure_0(_gthis,f)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,runFrame,(void))

void Animation_obj::nextFrame(){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_78_nextFrame)
HXLINE(  79)		this->_currentFrameIndex++;
HXLINE(  80)		if ((this->_stopped == true)) {
HXLINE(  81)			this->complete();
HXLINE(  82)			return;
            		}
HXLINE(  84)		if ((this->_currentFrameIndex >= this->keyFrames->length)) {
HXLINE(  85)			this->complete();
            		}
            		else {
HXLINE(  87)			this->runFrame(this->_currentFrameIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,nextFrame,(void))

void Animation_obj::complete(){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_95_complete)
HXDLIN(  95)		if ((this->_loop == true)) {
HXLINE(  96)			this->start(null());
            		}
            		else {
HXLINE(  98)			if (hx::IsNotNull( this->_complete )) {
HXLINE(  99)				this->_complete();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,complete,(void))

void Animation_obj::loop( ::Dynamic complete){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_104_loop)
HXLINE( 105)		this->_loop = true;
HXLINE( 106)		this->looping = true;
HXLINE( 107)		this->start(complete);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,loop,(void))

void Animation_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_111_stop)
HXLINE( 112)		if (hx::IsNotNull( this->_currentKeyFrame )) {
HXLINE( 113)			this->_currentKeyFrame->stop();
            		}
HXLINE( 115)		this->_stopped = true;
HXLINE( 116)		this->_loop = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,stop,(void))

void Animation_obj::fromXML( ::Xml xml){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_119_fromXML)
HXLINE( 120)		this->id = xml->get(HX_("id",db,5b,00,00));
HXLINE( 121)		this->easing = ::haxe::ui::animation::Animation_obj::easingFromString(xml->get(HX_("ease",ee,8b,0c,43)));
HXLINE( 122)		{
HXLINE( 122)			 ::Dynamic keyFrameNode = xml->elementsNamed(HX_("keyframe",2e,ae,bf,b7));
HXDLIN( 122)			while(( (bool)(keyFrameNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 122)				 ::Xml keyFrameNode1 = ( ( ::Xml)(keyFrameNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 123)				 ::haxe::ui::animation::AnimationKeyFrame kf = this->addKeyFrame(::Std_obj::parseInt(keyFrameNode1->get(HX_("time",0d,cc,fc,4c))));
HXLINE( 124)				{
HXLINE( 124)					 ::Dynamic refNode = keyFrameNode1->elements();
HXDLIN( 124)					while(( (bool)(refNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 124)						 ::Xml refNode1 = ( ( ::Xml)(refNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 125)						if ((refNode1->nodeType != ::Xml_obj::Element)) {
HXLINE( 125)							HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + refNode1->nodeType));
            						}
HXDLIN( 125)						 ::haxe::ui::animation::AnimationComponentRef r = kf->addComponentRef(refNode1->nodeName);
HXLINE( 126)						{
HXLINE( 126)							 ::Dynamic attrName = refNode1->attributes();
HXDLIN( 126)							while(( (bool)(attrName->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 126)								::String attrName1 = ( (::String)(attrName->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 127)								::String attrValue = refNode1->get(attrName1);
HXLINE( 128)								bool _hx_tmp;
HXDLIN( 128)								if (::StringTools_obj::startsWith(attrValue,HX_("{",7b,00,00,00))) {
HXLINE( 128)									_hx_tmp = ::StringTools_obj::endsWith(attrValue,HX_("}",7d,00,00,00));
            								}
            								else {
HXLINE( 128)									_hx_tmp = false;
            								}
HXDLIN( 128)								if (_hx_tmp) {
HXLINE( 129)									attrValue = attrValue.substring((int)1,(attrValue.length - (int)1));
HXLINE( 130)									r->addVar(attrName1,attrValue);
            								}
            								else {
HXLINE( 132)									r->addProperty(attrName1,::Std_obj::parseFloat(attrValue));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,fromXML,(void))

void Animation_obj::setVar(::String name,Float value){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_141_setVar)
HXDLIN( 141)		this->vars->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,setVar,(void))

 ::haxe::ui::animation::Animation Animation_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_0219bc876b904c65_144_clone)
HXLINE( 145)		 ::haxe::ui::animation::Animation c =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXLINE( 146)		c->id = this->id;
HXLINE( 147)		c->set_easingString(this->easingString);
HXLINE( 148)		c->easing = this->easing;
HXLINE( 149)		{
HXLINE( 149)			int _g = (int)0;
HXDLIN( 149)			::Array< ::Dynamic> _g1 = this->keyFrames;
HXDLIN( 149)			while((_g < _g1->length)){
HXLINE( 149)				 ::haxe::ui::animation::AnimationKeyFrame f = _g1->__get(_g).StaticCast<  ::haxe::ui::animation::AnimationKeyFrame >();
HXDLIN( 149)				_g = (_g + (int)1);
HXLINE( 150)				 ::haxe::ui::animation::AnimationKeyFrame cf = f->clone();
HXLINE( 151)				cf->animation = c;
HXLINE( 152)				c->keyFrames->push(cf);
            			}
            		}
HXLINE( 154)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,clone,return )

 ::Dynamic Animation_obj::easingFromString(::String s){
            	HX_STACKFRAME(&_hx_pos_0219bc876b904c65_182_easingFromString)
HXDLIN( 182)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,easingFromString,return )


hx::ObjectPtr< Animation_obj > Animation_obj::__new() {
	hx::ObjectPtr< Animation_obj > __this = new Animation_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Animation_obj > Animation_obj::__alloc(hx::Ctx *_hx_ctx) {
	Animation_obj *__this = (Animation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Animation_obj), true, "haxe.ui.animation.Animation"));
	*(void **)__this = Animation_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(keyFrames,"keyFrames");
	HX_MARK_MEMBER_NAME(componentMap,"componentMap");
	HX_MARK_MEMBER_NAME(easing,"easing");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_currentKeyFrame,"_currentKeyFrame");
	HX_MARK_MEMBER_NAME(easingString,"easingString");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(_currentFrameIndex,"_currentFrameIndex");
	HX_MARK_MEMBER_NAME(_complete,"_complete");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(_loop,"_loop");
	HX_MARK_MEMBER_NAME(_stopped,"_stopped");
	HX_MARK_MEMBER_NAME(vars,"vars");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyFrames,"keyFrames");
	HX_VISIT_MEMBER_NAME(componentMap,"componentMap");
	HX_VISIT_MEMBER_NAME(easing,"easing");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_currentKeyFrame,"_currentKeyFrame");
	HX_VISIT_MEMBER_NAME(easingString,"easingString");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(_currentFrameIndex,"_currentFrameIndex");
	HX_VISIT_MEMBER_NAME(_complete,"_complete");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(_loop,"_loop");
	HX_VISIT_MEMBER_NAME(_stopped,"_stopped");
	HX_VISIT_MEMBER_NAME(vars,"vars");
}

hx::Val Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return hx::Val( loop_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"vars") ) { return hx::Val( vars ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"_loop") ) { return hx::Val( _loop ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"easing") ) { return hx::Val( easing ); }
		if (HX_FIELD_EQ(inName,"setVar") ) { return hx::Val( setVar_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return hx::Val( looping ); }
		if (HX_FIELD_EQ(inName,"fromXML") ) { return hx::Val( fromXML_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"runFrame") ) { return hx::Val( runFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn() ); }
		if (HX_FIELD_EQ(inName,"_stopped") ) { return hx::Val( _stopped ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyFrames") ) { return hx::Val( keyFrames ); }
		if (HX_FIELD_EQ(inName,"_complete") ) { return hx::Val( _complete ); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return hx::Val( nextFrame_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addKeyFrame") ) { return hx::Val( addKeyFrame_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"componentMap") ) { return hx::Val( componentMap ); }
		if (HX_FIELD_EQ(inName,"easingString") ) { return hx::Val( easingString ); }
		if (HX_FIELD_EQ(inName,"setComponent") ) { return hx::Val( setComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponent") ) { return hx::Val( getComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return hx::Val( _currentTime ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentKeyFrame") ) { return hx::Val( _currentKeyFrame ); }
		if (HX_FIELD_EQ(inName,"set_easingString") ) { return hx::Val( set_easingString_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_currentFrameIndex") ) { return hx::Val( _currentFrameIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Animation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"easingFromString") ) { outValue = easingFromString_dyn(); return true; }
	}
	return false;
}

hx::Val Animation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { vars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_loop") ) { _loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"easing") ) { easing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stopped") ) { _stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyFrames") ) { keyFrames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_complete") ) { _complete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"componentMap") ) { componentMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"easingString") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_easingString(inValue.Cast< ::String >()) );easingString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentKeyFrame") ) { _currentKeyFrame=inValue.Cast<  ::haxe::ui::animation::AnimationKeyFrame >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_currentFrameIndex") ) { _currentFrameIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyFrames","\xa5","\x2e","\x8d","\x44"));
	outFields->push(HX_HCSTRING("componentMap","\xdf","\x25","\xea","\x26"));
	outFields->push(HX_HCSTRING("easing","\xab","\x4c","\x3d","\x88"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("_currentKeyFrame","\xe8","\x19","\x1e","\x0a"));
	outFields->push(HX_HCSTRING("easingString","\xdc","\x3b","\xd9","\x3f"));
	outFields->push(HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb"));
	outFields->push(HX_HCSTRING("_currentFrameIndex","\xff","\xf5","\x85","\x4b"));
	outFields->push(HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"));
	outFields->push(HX_HCSTRING("_loop","\x43","\xc2","\xc8","\xfa"));
	outFields->push(HX_HCSTRING("_stopped","\x8e","\x2b","\x1a","\x7d"));
	outFields->push(HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Animation_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,keyFrames),HX_HCSTRING("keyFrames","\xa5","\x2e","\x8d","\x44")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Animation_obj,componentMap),HX_HCSTRING("componentMap","\xdf","\x25","\xea","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Animation_obj,easing),HX_HCSTRING("easing","\xab","\x4c","\x3d","\x88")},
	{hx::fsString,(int)offsetof(Animation_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ui::animation::AnimationKeyFrame*/ ,(int)offsetof(Animation_obj,_currentKeyFrame),HX_HCSTRING("_currentKeyFrame","\xe8","\x19","\x1e","\x0a")},
	{hx::fsString,(int)offsetof(Animation_obj,easingString),HX_HCSTRING("easingString","\xdc","\x3b","\xd9","\x3f")},
	{hx::fsInt,(int)offsetof(Animation_obj,_currentTime),HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb")},
	{hx::fsInt,(int)offsetof(Animation_obj,_currentFrameIndex),HX_HCSTRING("_currentFrameIndex","\xff","\xf5","\x85","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Animation_obj,_complete),HX_HCSTRING("_complete","\x18","\xf8","\x5d","\xc7")},
	{hx::fsBool,(int)offsetof(Animation_obj,looping),HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20")},
	{hx::fsBool,(int)offsetof(Animation_obj,_loop),HX_HCSTRING("_loop","\x43","\xc2","\xc8","\xfa")},
	{hx::fsBool,(int)offsetof(Animation_obj,_stopped),HX_HCSTRING("_stopped","\x8e","\x2b","\x1a","\x7d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Animation_obj,vars),HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Animation_obj_sStaticStorageInfo = 0;
#endif

static ::String Animation_obj_sMemberFields[] = {
	HX_HCSTRING("keyFrames","\xa5","\x2e","\x8d","\x44"),
	HX_HCSTRING("componentMap","\xdf","\x25","\xea","\x26"),
	HX_HCSTRING("easing","\xab","\x4c","\x3d","\x88"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("_currentKeyFrame","\xe8","\x19","\x1e","\x0a"),
	HX_HCSTRING("easingString","\xdc","\x3b","\xd9","\x3f"),
	HX_HCSTRING("set_easingString","\xd9","\x15","\xba","\x9a"),
	HX_HCSTRING("addKeyFrame","\x4f","\x55","\x49","\x7c"),
	HX_HCSTRING("setComponent","\xbb","\xb0","\xa3","\x33"),
	HX_HCSTRING("getComponent","\x47","\x8d","\xaa","\x1e"),
	HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb"),
	HX_HCSTRING("_currentFrameIndex","\xff","\xf5","\x85","\x4b"),
	HX_HCSTRING("_complete","\x18","\xf8","\x5d","\xc7"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("runFrame","\xe2","\xb0","\xb8","\x0e"),
	HX_HCSTRING("nextFrame","\x3a","\x92","\xc8","\xad"),
	HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"),
	HX_HCSTRING("_loop","\x43","\xc2","\xc8","\xfa"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("_stopped","\x8e","\x2b","\x1a","\x7d"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("fromXML","\x8d","\x22","\x06","\x58"),
	HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e"),
	HX_HCSTRING("setVar","\x65","\x6c","\x71","\x6f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void Animation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Animation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#endif

hx::Class Animation_obj::__mClass;

static ::String Animation_obj_sStaticFields[] = {
	HX_HCSTRING("easingFromString","\x66","\x22","\x0b","\x7e"),
	::String(null())
};

void Animation_obj::__register()
{
	hx::Object *dummy = new Animation_obj;
	Animation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.animation.Animation","\x28","\xf5","\x0a","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Animation_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Animation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Animation_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Animation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Animation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace animation
