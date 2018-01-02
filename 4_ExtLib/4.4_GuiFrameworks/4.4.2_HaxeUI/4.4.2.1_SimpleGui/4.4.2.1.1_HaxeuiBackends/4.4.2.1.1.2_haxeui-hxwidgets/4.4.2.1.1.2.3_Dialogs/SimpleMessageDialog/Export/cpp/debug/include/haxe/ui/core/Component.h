// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_Component
#define INCLUDED_haxe_ui_core_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,DeferredBindingInfo)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,scripting,ScriptInterp)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,util,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS1(hscript,Interp)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Component_obj : public  ::haxe::ui::backend::ComponentBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentBase_obj super;
		typedef Component_obj OBJ_;
		Component_obj();

	public:
		enum { _hx_ClassId = 0x7140e8dc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.Component"); }
		static hx::ObjectPtr< Component_obj > __new();
		static hx::ObjectPtr< Component_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic self_8b3ae2fb();

		 ::Dynamic cloneComponent_8b3ae2fb();
		::String __ToString() const { return HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::Array< ::String > INTERACTIVE_EVENTS;
		static void addNamedComponentsFrom( ::haxe::ui::core::Component parent,::Array< ::Dynamic> list);
		static ::Dynamic addNamedComponentsFrom_dyn();

		virtual void create();
		::Dynamic create_dyn();

		virtual void createDefaults();
		::Dynamic createDefaults_dyn();

		virtual void createChildren();
		::Dynamic createChildren_dyn();

		virtual void destroyChildren();
		::Dynamic destroyChildren_dyn();

		 ::Dynamic _hasNativeEntry;
		bool hasNativeEntry;
		bool get_hasNativeEntry();
		::Dynamic get_hasNativeEntry_dyn();

		 ::haxe::ui::layouts::Layout _defaultLayout;
		virtual  ::haxe::ui::layouts::Layout createLayout();
		::Dynamic createLayout_dyn();

		 ::haxe::ds::StringMap _defaultBehaviours;
		void defaultBehaviour(::String name, ::haxe::ui::core::Behaviour behaviour);
		::Dynamic defaultBehaviour_dyn();

		void defaultBehaviours( ::haxe::ds::StringMap behaviours);
		::Dynamic defaultBehaviours_dyn();

		 ::haxe::ds::StringMap _behaviours;
		 ::haxe::ui::core::Behaviour getBehaviour(::String id);
		::Dynamic getBehaviour_dyn();

		 ::haxe::ui::util::VariantType behaviourGet(::String id);
		::Dynamic behaviourGet_dyn();

		 ::Dynamic behaviourGetDynamic(::String id);
		::Dynamic behaviourGetDynamic_dyn();

		void behaviourSet(::String id, ::haxe::ui::util::VariantType value);
		::Dynamic behaviourSet_dyn();

		void behaviourRun(::String id);
		::Dynamic behaviourRun_dyn();

		::Array< ::String > _behaviourUpdateOrder;
		void behavioursUpdate();
		::Dynamic behavioursUpdate_dyn();

		 ::Dynamic _native;
		 ::Dynamic get_native();
		::Dynamic get_native_dyn();

		 ::Dynamic set_native( ::Dynamic value);
		::Dynamic set_native_dyn();

		bool _animatable;
		bool get_animatable();
		::Dynamic get_animatable_dyn();

		bool set_animatable(bool value);
		::Dynamic set_animatable_dyn();

		 ::Dynamic userData;
		::String _id;
		::String get_id();
		::Dynamic get_id_dyn();

		::String set_id(::String value);
		::Dynamic set_id_dyn();

		::String _text;
		::String get_text();
		::Dynamic get_text_dyn();

		virtual ::String set_text(::String value);
		::Dynamic set_text_dyn();

		virtual  ::haxe::ui::util::VariantType get_value();
		::Dynamic get_value_dyn();

		virtual  ::haxe::ui::util::VariantType set_value( ::haxe::ui::util::VariantType value);
		::Dynamic set_value_dyn();

		 ::haxe::ui::core::Screen screen;
		 ::haxe::ui::core::Screen get_screen();
		::Dynamic get_screen_dyn();

		 ::haxe::ds::StringMap _bindings;
		void addBinding( ::haxe::ui::core::Component target,::String transform,::String targetProperty,::String sourceProperty);
		::Dynamic addBinding_dyn();

		::Array< ::Dynamic> _deferredBindings;
		void addDeferredBinding(::String targetId,::String sourceId,::String transform,::String targetProperty,::String sourceProperty);
		::Dynamic addDeferredBinding_dyn();

		::Array< ::Dynamic> getDefferedBindings();
		::Dynamic getDefferedBindings_dyn();

		void handleBindings(::Array< ::String > sourceProperties);
		::Dynamic handleBindings_dyn();

		 ::haxe::ui::util::Rectangle _componentClipRect;
		 ::haxe::ui::util::Rectangle get_componentClipRect();
		::Dynamic get_componentClipRect_dyn();

		 ::haxe::ui::util::Rectangle set_componentClipRect( ::haxe::ui::util::Rectangle value);
		::Dynamic set_componentClipRect_dyn();

		 ::haxe::ui::core::Component get_rootComponent();
		::Dynamic get_rootComponent_dyn();

		::Array< ::Dynamic> _children;
		 ::haxe::ui::core::Component parentComponent;
		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);
		::Dynamic addComponent_dyn();

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  dispose,hx::Null< bool >  invalidate);
		::Dynamic removeComponent_dyn();

		virtual void onDestroy();
		::Dynamic onDestroy_dyn();

		void removeAllComponents(hx::Null< bool >  dispose);
		::Dynamic removeAllComponents_dyn();

		::Array< ::Dynamic> childComponents;
		::Array< ::Dynamic> get_childComponents();
		::Dynamic get_childComponents_dyn();

		virtual  ::Dynamic findComponent(::String criteria,hx::Class type, ::Dynamic recursive,::String searchType);
		::Dynamic findComponent_dyn();

		 ::Dynamic findAncestor(::String criteria,hx::Class type,::String searchType);
		::Dynamic findAncestor_dyn();

		::Array< ::Dynamic> findComponentsUnderPoint(Float screenX,Float screenY);
		::Dynamic findComponentsUnderPoint_dyn();

		int getComponentIndex( ::haxe::ui::core::Component child);
		::Dynamic getComponentIndex_dyn();

		void setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		 ::haxe::ui::core::Component getComponentAt(int index);
		::Dynamic getComponentAt_dyn();

		void hide();
		::Dynamic hide_dyn();

		void show();
		::Dynamic show_dyn();

		bool _hidden;
		bool get_hidden();
		::Dynamic get_hidden_dyn();

		bool set_hidden(bool value);
		::Dynamic set_hidden_dyn();

		bool _disabled;
		bool get_disabled();
		::Dynamic get_disabled_dyn();

		bool set_disabled(bool value);
		::Dynamic set_disabled_dyn();

		 ::haxe::ui::styles::Style customStyle;
		::Array< ::String > classes;
		void addClass(::String name,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic addClass_dyn();

		void removeClass(::String name,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic removeClass_dyn();

		bool hasClass(::String name);
		::Dynamic hasClass_dyn();

		::String get_styleNames();
		::Dynamic get_styleNames_dyn();

		::String set_styleNames(::String value);
		::Dynamic set_styleNames_dyn();

		::String _styleString;
		::String get_styleString();
		::Dynamic get_styleString_dyn();

		::String set_styleString(::String value);
		::Dynamic set_styleString_dyn();

		 ::haxe::ui::styles::Style _style;
		 ::haxe::ui::styles::Style get_style();
		::Dynamic get_style_dyn();

		 ::haxe::ui::styles::Style set_style( ::haxe::ui::styles::Style value);
		::Dynamic set_style_dyn();

		 ::haxe::ui::util::EventMap _hx___events;
		void registerEvent(::String type, ::Dynamic listener);
		::Dynamic registerEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void dispatch( ::haxe::ui::core::UIEvent event);
		::Dynamic dispatch_dyn();

		void _onMappedEvent( ::haxe::ui::core::UIEvent event);
		::Dynamic _onMappedEvent_dyn();

		 ::haxe::ui::util::EventMap _disabledEvents;
		bool isInteractiveEvent(::String type);
		::Dynamic isInteractiveEvent_dyn();

		void disableInteractivity(bool disable,::String styleName);
		::Dynamic disableInteractivity_dyn();

		bool _includeInLayout;
		bool get_includeInLayout();
		::Dynamic get_includeInLayout_dyn();

		bool set_includeInLayout(bool value);
		::Dynamic set_includeInLayout_dyn();

		 ::haxe::ui::layouts::Layout _layout;
		 ::haxe::ui::layouts::Layout get_layout();
		::Dynamic get_layout_dyn();

		 ::haxe::ui::layouts::Layout set_layout( ::haxe::ui::layouts::Layout value);
		::Dynamic set_layout_dyn();

		bool _layoutLocked;
		void lockLayout(hx::Null< bool >  recursive);
		::Dynamic lockLayout_dyn();

		void unlockLayout(hx::Null< bool >  recursive);
		::Dynamic unlockLayout_dyn();

		bool _ready;
		bool isReady;
		bool get_isReady();
		::Dynamic get_isReady_dyn();

		void ready();
		::Dynamic ready_dyn();

		virtual void onReady();
		::Dynamic onReady_dyn();

		void onResized();
		::Dynamic onResized_dyn();

		void onMoved();
		::Dynamic onMoved_dyn();

		 ::Dynamic _color;
		 ::Dynamic _backgroundColor;
		 ::Dynamic _borderColor;
		 ::Dynamic _borderSize;
		 ::Dynamic _borderRadius;
		 ::Dynamic _padding;
		 ::Dynamic _paddingLeft;
		 ::Dynamic _paddingRight;
		 ::Dynamic _paddingTop;
		 ::Dynamic _paddingBottom;
		 ::Dynamic _marginLeft;
		 ::Dynamic _marginRight;
		 ::Dynamic _marginTop;
		 ::Dynamic _marginBottom;
		 ::Dynamic _clip;
		 ::Dynamic _opacity;
		::String _horizontalAlign;
		::String _verticalAlign;
		bool autoWidth;
		bool get_autoWidth();
		::Dynamic get_autoWidth_dyn();

		bool autoHeight;
		bool get_autoHeight();
		::Dynamic get_autoHeight_dyn();

		void resizeComponent( ::Dynamic width, ::Dynamic height);
		::Dynamic resizeComponent_dyn();

		bool autoSize();
		::Dynamic autoSize_dyn();

		 ::Dynamic _percentWidth;
		 ::Dynamic get_percentWidth();
		::Dynamic get_percentWidth_dyn();

		 ::Dynamic set_percentWidth( ::Dynamic value);
		::Dynamic set_percentWidth_dyn();

		 ::Dynamic _percentHeight;
		 ::Dynamic get_percentHeight();
		::Dynamic get_percentHeight_dyn();

		 ::Dynamic set_percentHeight( ::Dynamic value);
		::Dynamic set_percentHeight_dyn();

		bool hitTest(Float left,Float top);
		::Dynamic hitTest_dyn();

		 ::Dynamic _componentWidth;
		 ::Dynamic get_componentWidth();
		::Dynamic get_componentWidth_dyn();

		 ::Dynamic set_componentWidth( ::Dynamic value);
		::Dynamic set_componentWidth_dyn();

		 ::Dynamic _componentHeight;
		 ::Dynamic get_componentHeight();
		::Dynamic get_componentHeight_dyn();

		 ::Dynamic set_componentHeight( ::Dynamic value);
		::Dynamic set_componentHeight_dyn();

		 ::Dynamic _width;
		Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		 ::Dynamic _height;
		Float set_height(Float value);
		::Dynamic set_height_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		 ::Dynamic _actualWidth;
		 ::Dynamic _actualHeight;
		void moveComponent( ::Dynamic left, ::Dynamic top);
		::Dynamic moveComponent_dyn();

		 ::Dynamic _left;
		 ::Dynamic get_left();
		::Dynamic get_left_dyn();

		 ::Dynamic set_left( ::Dynamic value);
		::Dynamic set_left_dyn();

		 ::Dynamic _top;
		 ::Dynamic get_top();
		::Dynamic get_top_dyn();

		 ::Dynamic set_top( ::Dynamic value);
		::Dynamic set_top_dyn();

		Float screenLeft;
		Float get_screenLeft();
		::Dynamic get_screenLeft_dyn();

		Float screenTop;
		Float get_screenTop();
		::Dynamic get_screenTop_dyn();

		bool scriptAccess;
		 ::haxe::ui::scripting::ScriptInterp _interp;
		::String _script;
		::String script;
		::String set_script(::String value);
		::Dynamic set_script_dyn();

		void executeScriptCall(::String expr);
		::Dynamic executeScriptCall_dyn();

		 ::haxe::ui::scripting::ScriptInterp findScriptInterp(hx::Null< bool >  refreshNamedComponents);
		::Dynamic findScriptInterp_dyn();

		void initScript();
		::Dynamic initScript_dyn();

		 ::haxe::ds::StringMap _scriptEvents;
		void addScriptEvent(::String event,::String script);
		::Dynamic addScriptEvent_dyn();

		void _onScriptEvent(::String eventId, ::haxe::ui::core::UIEvent event);
		::Dynamic _onScriptEvent_dyn();

		::Array< ::Dynamic> namedComponents;
		::Array< ::Dynamic> get_namedComponents();
		::Dynamic get_namedComponents_dyn();

		 ::Dynamic _hx___onClick;
		Dynamic _hx___onClick_dyn() { return _hx___onClick;}
		 ::Dynamic onClick;
		Dynamic onClick_dyn() { return onClick;}
		 ::Dynamic set_onClick( ::Dynamic value);
		::Dynamic set_onClick_dyn();

		 ::Dynamic _hx___onChange;
		Dynamic _hx___onChange_dyn() { return _hx___onChange;}
		 ::Dynamic onChange;
		Dynamic onChange_dyn() { return onChange;}
		 ::Dynamic set_onChange( ::Dynamic value);
		::Dynamic set_onChange_dyn();

		 ::haxe::ds::StringMap _invalidationFlags;
		 ::haxe::ds::StringMap _delayedInvalidationFlags;
		bool _isAllInvalid;
		bool _isValidating;
		bool _isDisposed;
		int _invalidateCount;
		int _depth;
		int get_depth();
		::Dynamic get_depth_dyn();

		int set_depth(int value);
		::Dynamic set_depth_dyn();

		void syncValidation();
		::Dynamic syncValidation_dyn();

		void validate();
		::Dynamic validate_dyn();

		virtual void validateInternal();
		::Dynamic validateInternal_dyn();

		virtual void validateData();
		::Dynamic validateData_dyn();

		virtual bool validateLayout();
		::Dynamic validateLayout_dyn();

		void validateStyle();
		::Dynamic validateStyle_dyn();

		void validatePosition();
		::Dynamic validatePosition_dyn();

		virtual void updateDisplay();
		::Dynamic updateDisplay_dyn();

		bool validateAutoSize();
		::Dynamic validateAutoSize_dyn();

		bool isInvalid(::String flag);
		::Dynamic isInvalid_dyn();

		void invalidate(::String flag);
		::Dynamic invalidate_dyn();

		void invalidateData();
		::Dynamic invalidateData_dyn();

		void invalidateLayout();
		::Dynamic invalidateLayout_dyn();

		void invalidatePosition();
		::Dynamic invalidatePosition_dyn();

		void invalidateDisplay();
		::Dynamic invalidateDisplay_dyn();

		void invalidateStyle();
		::Dynamic invalidateStyle_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);

		virtual  ::haxe::ui::core::Component cloneComponent();
		::Dynamic cloneComponent_dyn();

		virtual  ::haxe::ui::util::VariantType getProperty(::String name);
		::Dynamic getProperty_dyn();

		virtual  ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType value);
		::Dynamic setProperty_dyn();

		::String getClassProperty(::String name);
		::Dynamic getClassProperty_dyn();

		 ::haxe::ds::StringMap _classProperties;
		void setClassProperty(::String name,::String value);
		::Dynamic setClassProperty_dyn();

		::String getNativeConfigProperty(::String query,::String defaultValue);
		::Dynamic getNativeConfigProperty_dyn();

		bool getNativeConfigPropertyBool(::String query,hx::Null< bool >  defaultValue);
		::Dynamic getNativeConfigPropertyBool_dyn();

		 ::haxe::ds::StringMap getNativeConfigProperties(::String query);
		::Dynamic getNativeConfigProperties_dyn();

		::String className;
		::String get_className();
		::Dynamic get_className_dyn();

		 ::Dynamic get_color();
		::Dynamic get_color_dyn();

		 ::Dynamic set_color( ::Dynamic value);
		::Dynamic set_color_dyn();

		 ::Dynamic get_backgroundColor();
		::Dynamic get_backgroundColor_dyn();

		 ::Dynamic set_backgroundColor( ::Dynamic value);
		::Dynamic set_backgroundColor_dyn();

		 ::Dynamic get_borderColor();
		::Dynamic get_borderColor_dyn();

		 ::Dynamic set_borderColor( ::Dynamic value);
		::Dynamic set_borderColor_dyn();

		 ::Dynamic get_borderSize();
		::Dynamic get_borderSize_dyn();

		 ::Dynamic set_borderSize( ::Dynamic value);
		::Dynamic set_borderSize_dyn();

		 ::Dynamic get_borderRadius();
		::Dynamic get_borderRadius_dyn();

		 ::Dynamic set_borderRadius( ::Dynamic value);
		::Dynamic set_borderRadius_dyn();

		 ::Dynamic padding;
		 ::Dynamic set_padding( ::Dynamic value);
		::Dynamic set_padding_dyn();

		 ::Dynamic get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		 ::Dynamic set_paddingLeft( ::Dynamic value);
		::Dynamic set_paddingLeft_dyn();

		 ::Dynamic get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		 ::Dynamic set_paddingRight( ::Dynamic value);
		::Dynamic set_paddingRight_dyn();

		 ::Dynamic get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		 ::Dynamic set_paddingTop( ::Dynamic value);
		::Dynamic set_paddingTop_dyn();

		 ::Dynamic get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		 ::Dynamic set_paddingBottom( ::Dynamic value);
		::Dynamic set_paddingBottom_dyn();

		 ::Dynamic get_marginLeft();
		::Dynamic get_marginLeft_dyn();

		 ::Dynamic set_marginLeft( ::Dynamic value);
		::Dynamic set_marginLeft_dyn();

		 ::Dynamic get_marginRight();
		::Dynamic get_marginRight_dyn();

		 ::Dynamic set_marginRight( ::Dynamic value);
		::Dynamic set_marginRight_dyn();

		 ::Dynamic get_marginTop();
		::Dynamic get_marginTop_dyn();

		 ::Dynamic set_marginTop( ::Dynamic value);
		::Dynamic set_marginTop_dyn();

		 ::Dynamic get_marginBottom();
		::Dynamic get_marginBottom_dyn();

		 ::Dynamic set_marginBottom( ::Dynamic value);
		::Dynamic set_marginBottom_dyn();

		 ::Dynamic get_clip();
		::Dynamic get_clip_dyn();

		 ::Dynamic set_clip( ::Dynamic value);
		::Dynamic set_clip_dyn();

		 ::Dynamic get_opacity();
		::Dynamic get_opacity_dyn();

		 ::Dynamic set_opacity( ::Dynamic value);
		::Dynamic set_opacity_dyn();

		::String get_horizontalAlign();
		::Dynamic get_horizontalAlign_dyn();

		::String set_horizontalAlign(::String value);
		::Dynamic set_horizontalAlign_dyn();

		::String get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		::String set_verticalAlign(::String value);
		::Dynamic set_verticalAlign_dyn();

		virtual  ::haxe::ui::core::Component self();
		::Dynamic self_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Component */ 
