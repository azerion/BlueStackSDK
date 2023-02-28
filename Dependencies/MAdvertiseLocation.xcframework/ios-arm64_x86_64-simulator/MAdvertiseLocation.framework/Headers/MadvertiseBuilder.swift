//
//  MadvertiseBuilder.swift
//  MAdvertiseLocation
//
//  Created by htrimech MacBook Pro on 08/10/2018.
//  Copyright © 2018 MAdvertise. All rights reserved.
//

import UIKit
@objc
public class MadvertiseBuilder: NSObject {
    
    @objc
    var appId:String? = nil
    
    @objc
    var launchOptions : [UIApplication.LaunchOptionsKey: Any]? = nil
    
    @objc
    var consentFlag:String?  = "0"
    
    
    /// The default MadvertiseBuilder  initialisation
    @objc
    public override init() {}
    
    /**
     Function : set appID .
     
     - Parameter appId: The String AppID
     */
    @objc
    public func set(appId:String) -> Void {
        self.appId = appId
    }
    
    /**
     Function : set ConsentFlag .
     
     - Parameter appId: The String AppID
     */
    @objc
    public func set(consentFlag:String) -> Void {
        self.consentFlag = consentFlag
    }
    /**
     Function : set launchOptions .
     
     - Parameter appId: The  [UIApplication.LaunchOptionsKey: Any]? launchOptions
     */
    @objc
    public func set(launchOptions: [UIApplication.LaunchOptionsKey: Any]? ) -> Void {
        self.launchOptions = launchOptions
    }
    
    /**
     Function : build .
     
     - Returns: BlueStackLocation: The  BlueStackLocation object fom build data ,return nil when app id nil
     */
    @objc
    public func build() -> BlueStackLocation {
        let  madvertiseLocation:BlueStackLocation = BlueStackLocation.init(madvertiseBuilder:self)
        if appId != nil {
        }else{
            MadvertiseLocationUtility.logErrorMessage("build With appId nil")
        }
        return  madvertiseLocation
    }
}
